/*
 * fibonacci_test.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/q_1_3.h"
#include "gtest/gtest.h"

TEST(q_1_3, Urlify) {
    char input[80] = "ab cd";

    q_1_3::Urlify(input);

    EXPECT_EQ(strcmp(input, "ab%20cd"), 0);
}


