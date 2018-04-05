/*
 * fibonacci_test.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/bit_counter.h"
#include "gtest/gtest.h"

TEST(BitCounter, countBitsSlow) {
    EXPECT_EQ(BitCounter::countBitsSlow(0), 0);
    EXPECT_EQ(BitCounter::countBitsSlow(1), 1);
    EXPECT_EQ(BitCounter::countBitsSlow(2), 1);
    EXPECT_EQ(BitCounter::countBitsSlow(3), 2);
    EXPECT_EQ(BitCounter::countBitsSlow(0x55555555), 16);
    EXPECT_EQ(BitCounter::countBitsSlow(0xFFFFFFFF), 32);

    for (int i = 0; i < 1000000; i++) {
        EXPECT_EQ(BitCounter::countBitsSlow(0x55555555), 16);
    }
}

TEST(BitCounter, countBitsFast) {
    EXPECT_EQ(BitCounter::countBitsFast(0), 0);
    EXPECT_EQ(BitCounter::countBitsFast(1), 1);
    EXPECT_EQ(BitCounter::countBitsFast(2), 1);
    EXPECT_EQ(BitCounter::countBitsFast(3), 2);
    EXPECT_EQ(BitCounter::countBitsFast(0x55555555), 16);
    EXPECT_EQ(BitCounter::countBitsFast(0xFFFFFFFF), 32);

    for (int i = 0; i < 1000000; i++) {
        EXPECT_EQ(BitCounter::countBitsFast(0x55555555), 16);
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

