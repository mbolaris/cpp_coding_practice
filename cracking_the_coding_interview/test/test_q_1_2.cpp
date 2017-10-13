/*
 * fibonacci_test.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/q_1_2.h"
#include "gtest/gtest.h"

TEST(q_1_2, isPermutation) {
    EXPECT_EQ(q_1_2::isPermutation("abcd", "dbca"), true);
    EXPECT_EQ(q_1_2::isPermutation("abca", "aaaa"), false);
    EXPECT_EQ(q_1_2::isPermutation("KaiBolarisIsAwesome!",
                                   "xxxxxxxxxxxxxxxxxxxx"), false);
    EXPECT_EQ(q_1_2::isPermutation("", "xxxxxxxxxxxxxxxxxxxx"), false);
    EXPECT_EQ(q_1_2::isPermutation("", ""), true);
}


// int main(int argc, char **argv) {
//    testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}

