#pragma once

#include <string>
#include <array>

enum TokenType {
  ERROR, END_OF_FILE, SEP, 
  NUMBER, STRING, IDENT, 
  EQUAL, PLUS, L_PAREN, R_PAREN
};

const std::array<std::string, 100> kTokenTypeNames = {{
  "ERROR", "END_OF_FILE", "SEP",
  "NUMBER", "STRING", "IDENT",
  "EQUAL", "PLUS", "L_PAREN", "R_PAREN"
}};

class Token {
    const TokenType type_;
    const size_t line_;
    const size_t start_;
    std::string value_;
  public:
    Token(TokenType t, size_t l, size_t s) :
      type_(t), line_(l), start_(s) {}

    Token(TokenType t, size_t l, size_t s, std::string v) :
      type_(t), line_(l), start_(s), value_(std::move(v)) {}

    [[nodiscard]] const std::string& name() const {
      return kTokenTypeNames[type_];
    }

    [[nodiscard]] bool hasValue() const {
      return type_ == NUMBER || type_ == IDENT || type_ == STRING;
    }

    [[nodiscard]] TokenType type() const {
      return type_;
    }

    [[nodiscard]] size_t line() const {
      return line_;
    }

    [[nodiscard]] size_t start() const {
      return start_;
    }

    const std::string& value() {
      return value_;
    }

    void push_back(char c) {
      value_ += c;
    }
};

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
      while(isdigit(peeked_)) {
        token.push_back(peeked_);
        advance();
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

    switch(peeked_) {
      case EOF:
        return createToken(END_OF_FILE);
      case '\n':
        return endOfLine();
      case '=':
        advance();
        return createToken(EQUAL);
      case '+':
        advance();
        return createToken(PLUS);
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

