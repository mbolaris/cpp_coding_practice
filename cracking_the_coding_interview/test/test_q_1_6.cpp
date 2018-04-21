/*
 *
 *
 *  Copyright 2018 Bolaris Engineering
 *
 */

#include "../include/q_1_6.h"
#include "gtest/gtest.h"

TEST(q_1_6, Compress) {
    EXPECT_EQ(q_1_6::Compress(""), "");
    EXPECT_EQ(q_1_6::Compress("abc"), "abc");
    EXPECT_EQ(q_1_6::Compress("aabcccccaaa"), "a2b1c5a3");
    EXPECT_EQ(q_1_6::Compress("aaaaaaaaaaaaaa"), "a14");
}

