#pragma once

// TODO: find a way to coalesce this into a single list.
enum TokenType {
  ERROR, END_OF_FILE, SEP, 
  NUMBER, STRING, IDENT, 
  ASSIGN, PLUS, MINUS, STAR, SLASH, 
  NEGATE, EQUALS, NOT_EQUAL,  GREATER, G_EQUAL, LESS, L_EQUAL,
  L_PAREN, R_PAREN, L_BRACE, R_BRACE, L_BRACKET, R_BRACKET,
  DOT, COMMA, COLON
};

const std::array<std::string, 100> kTokenTypeNames = {{
  "ERROR", "END_OF_FILE", "SEP",
  "NUMBER", "STRING", "IDENT",
  "ASSIGN", "PLUS", "MINUS", "STAR", "SLASH",
  "NEGATE", "EQUALS", "NOT_EQUAL",  "GREATER", "G_EQUAL", "LESS", "L_EQUAL",     
  "L_PAREN", "R_PAREN", "L_BRACE", "R_BRACE", "L_BRACKET", "R_BRACKET",
  "DOT", "COMMA", "COLON"
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

    const std::string& name() const {
      return kTokenTypeNames[type_];
    }

    bool hasValue() const {
      return type_ == NUMBER || type_ == IDENT || type_ == STRING;
    }

    TokenType type() const {
      return type_;
    }

    size_t line() const {
      return line_;
    }

    size_t start() const {
      return start_;
    }

    const std::string& value() {
      return value_;
    }

    void push_back(char c) {
      value_ += c;
    }
};


