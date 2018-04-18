/*
 * fibonacci_test.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/q_1_2.h"
#include "gtest/gtest.h"

TEST(q_1_2, IsPermutation) {
    EXPECT_EQ(q_1_2::IsPermutation("abcd", "dbca"), true);
    EXPECT_EQ(q_1_2::IsPermutation("abca", "aaaa"), false);
    EXPECT_EQ(q_1_2::IsPermutation("KaiBolarisIsAwesome!",
                                   "xxxxxxxxxxxxxxxxxxxx"), false);
    EXPECT_EQ(q_1_2::IsPermutation("", "xxxxxxxxxxxxxxxxxxxx"), false);
    EXPECT_EQ(q_1_2::IsPermutation("", ""), true);
}


