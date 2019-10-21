#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include "lexer.h"

void run(std::istream* is) {
    Lexer lex(is);
    while(true) {
      auto t = lex.getToken();
      if (t.hasValue()) {
        std::cout << t.name() << " Value: " << t.value() << std::endl;
      } else {
        std::cout << t.name() << std::endl; 
      }

      if (t.type() == ERROR) {
        std::cout << "Syntax error: " << t.value() << " at line " << t.line() << " index " << t.start() << std::endl;
        break;
      }
      if (t.type() == END_OF_FILE) {
        break;
      }
    }
}

void runInteractive() {
  while(true) {
    std::cout << "> ";

    std::string buff;
    std::getline(std::cin, buff);
    if (buff.empty()) {
      break;
    }
    std::istringstream in(buff);
    run(&in);
  }
}

void runFile(const char* filename) {
  std::ifstream in(filename);
  run(&in);
}

int main(int argc, char** argv) {
  if (argc == 1) {
    runInteractive();
  } else {
    runFile(argv[1]);
  }
  return 0;

  return 0;
}
