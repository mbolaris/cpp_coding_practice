/*
 * fibonacci_test.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/q_1_1.h"
#include "gtest/gtest.h"

TEST(q_1_1, IsUniqueArrayImp) {
    EXPECT_EQ(q_1_1::IsUniqueArrayImp("abcd"), true);
    EXPECT_EQ(q_1_1::IsUniqueArrayImp("abca"), false);
    EXPECT_EQ(q_1_1::IsUniqueArrayImp("KaiBolarisIsAwesome!"), false);
}

TEST(q_1_1, IsUniqueBitsetImp) {
    EXPECT_EQ(q_1_1::IsUniqueBitsetImp("abcd"), true);
    EXPECT_EQ(q_1_1::IsUniqueBitsetImp("abca"), false);
    EXPECT_EQ(q_1_1::IsUniqueBitsetImp("KaiBolarisIsAwesome!"), false);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

