// Copyright (c) 2019 Herman Polloni. All rights reserved.

#include <sstream>
#include <iostream>
#include "lexer.h"
#include "gtest/gtest.h"

class LexerTest : public ::test
TEST(LexerTest, canParseIdentifier) {
    auto in = std::istringstream("this_is_an_identifier");
    Lexer lex(&in);

    ASSERT_EQ(lex.getToken().type(), IDENT);
}

