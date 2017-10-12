/*
 * fibonacci_test.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/q_1_1.h"
#include "gtest/gtest.h"

TEST(q_1_1, isUniqueArrayImp) {
    EXPECT_EQ(q_1_1::isUniqueArrayImp("abcd"), true);
    EXPECT_EQ(q_1_1::isUniqueArrayImp("abca"), false);
    EXPECT_EQ(q_1_1::isUniqueArrayImp("KaiBolarisIsAwesome!"), false);
}

TEST(q_1_1, isUniqueBitsetImp) {
    EXPECT_EQ(q_1_1::isUniqueBitsetImp("abcd"), true);
    EXPECT_EQ(q_1_1::isUniqueBitsetImp("abca"), false);
    EXPECT_EQ(q_1_1::isUniqueBitsetImp("KaiBolarisIsAwesome!"), false);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

