#include <string>
#include <fstream>
#include <iostream>
#include "lexer.h"

int main(int argc, char** argv) {
  std::ifstream in(argv[1]);
  Lexer lex(&in);
  while(true) {
    auto t = lex.getToken();
    if (t.hasValue()) {
      std::cout << t.name() << " Value: " << t.value() << std::endl;
    } else {
      std::cout << t.name() << std::endl; 
    }

    if (t.type() == ERROR) {
      std::cout << "Syntax error: " << t.value() << " at line " << t.line() << " index " << t.start() << std::endl;
      return -1;
    }
    if (t.type() == END_OF_FILE) {
      break;
    }
  }

  return 0;
}
