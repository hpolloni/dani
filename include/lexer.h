#pragma once

#include <string>
#include <array>
#include "token.h"

class Lexer {
    std::istream *stream_;
    int currentLine_;// the current line. For error reporting.
    int index_;      // the current index in the current line. For error reporting.

    char peeked_;    // the character being processed.

    void advance() {
      stream_->get();
      ++index_;
      peeked_ = stream_->peek();
    }

    Token stringLiteral() {
      const char quote = peeked_;
      auto token = createToken(STRING);
      advance(); // consume the first quote
      while (peeked_ != quote && peeked_ != '\n' && peeked_ != EOF) {
        token.push_back(peeked_);
        advance();
      }
      if (peeked_ == quote) {
        advance();
      } else {
        return fail("Unexpected end of string found");
      }
      return token;
    }

    Token createToken(TokenType type) {
      return Token(type, currentLine_, index_);
    }

    Token fail(const std::string& message) {
      return Token(ERROR, currentLine_, index_, message);
    }

    void ignoreWhitespace() {
      if (isspace(peeked_) && peeked_ != '\n') {
        while (isspace(peeked_) && peeked_ != '\n') {
          advance();
        }
      }
    }

    void ignoreComments() {
      if (peeked_ == '#') {
        while(peeked_ != '\n' && peeked_ != EOF) {
          advance();
        }
      }
    }

    Token endOfLine() {
      while(peeked_ == '\n') {
        ++currentLine_;
        advance();
      }
      index_ = 0;
      return createToken(SEP);
    }

    Token numberLiteral() {
      auto token = createToken(NUMBER);
      auto seenDot = false;
      while(isdigit(peeked_)) {
        token.push_back(peeked_);
        advance();
        if (peeked_ == '.') {
          if (seenDot) {
            return fail("You can't use the dot operator on a number");
          }
          token.push_back(peeked_);
          advance();
          seenDot = true;
        }
      }
      return token;
    }

    Token identifier() {
      auto token = createToken(IDENT);
      while (isalpha(peeked_) || isdigit(peeked_) || peeked_ == '_') {
        token.push_back(peeked_);
        advance();
      }
      return token;
    }

  public:
    explicit Lexer(std::istream* stream)
      : stream_(stream),
        currentLine_(1),
        index_(0),
        peeked_(-1) {}

  Token getToken() {
    
    peeked_ = stream_->peek();
    ignoreWhitespace();
    ignoreComments();

    // TODO: refactor this. A lot of duplicate code for handling single chars tokens
    switch(peeked_) {
      case EOF:
        return createToken(END_OF_FILE);
      case '\n':
        return endOfLine();
      case '+':
        advance();
        return createToken(PLUS);
      case '-':
        advance();
        return createToken(MINUS);
      case '*':
        advance();
        return createToken(STAR);
      case '/':
        advance();
        return createToken(SLASH);
      case '!':
        advance();
        if (peeked_ == '=') {
          advance();
          return createToken(NOT_EQUAL);
        }
        return createToken(NEGATE);
      case '=':
        advance();
        if (peeked_ == '=') {
          advance();
          return createToken(EQUALS);
        }
        return createToken(ASSIGN);
      case '>':
        advance();
        if (peeked_ == '=') {
          advance();
          return createToken(G_EQUAL);
        }
        return createToken(GREATER);
      case '<':
        advance();
        if (peeked_ == '=') {
          advance();
          return createToken(L_EQUAL);
        }
        return createToken(LESS);
      case '(':
        advance();
        return createToken(L_PAREN);
      case ')':
        advance();
        return createToken(R_PAREN);
      case '{':
        advance();
        return createToken(L_BRACE);
      case '}':
        advance();
        return createToken(R_BRACE);
      case '[':
        advance();
        return createToken(L_BRACKET);
      case ']':
        advance();
        return createToken(R_BRACKET);
      case ',':
        advance();
        return createToken(COMMA);
      case '.':
        advance();
        return createToken(DOT);
      case ':':
        advance();
        return createToken(COLON);
      case '0'...'9':
        return numberLiteral();
      case 'a'...'z':
      case 'A'...'Z':
      case '_':
        return identifier();
      case '"':
      case '\'':
        return stringLiteral();
      default:
        return fail("Unexpected token");
    }
  }
};

