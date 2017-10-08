/*
 * fibonacci_test.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/q_1_1.h"
#include "gtest/gtest.h"

TEST(Q_1_1, isUnique) {
    EXPECT_EQ(Q_1_1::isUnique("abcd"), true);
    EXPECT_EQ(Q_1_1::isUnique("abca"), false);
    EXPECT_EQ(Q_1_1::isUnique("KaiBolarisIsAwesome!"), false);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

