/*
 *
 *
 *  Copyright 2018 Bolaris Engineering
 *
 */

#include "../include/q_1_5.h"
#include "gtest/gtest.h"

TEST(q_1_5, IsOneEditAway) {
    EXPECT_EQ(q_1_5::IsOneEditAway("", ""), true);
    EXPECT_EQ(q_1_5::IsOneEditAway("X", ""), true);
    EXPECT_EQ(q_1_5::IsOneEditAway("pale", "ple"), true);
    EXPECT_EQ(q_1_5::IsOneEditAway("pale", "bale"), true);
    EXPECT_EQ(q_1_5::IsOneEditAway("pale", "bake"), false);
    EXPECT_EQ(q_1_5::IsOneEditAway("pales", "ple"), false);
    EXPECT_EQ(q_1_5::IsOneEditAway("", "xxx"), false);
    EXPECT_EQ(q_1_5::IsOneEditAway("abc", ""), false);
}

