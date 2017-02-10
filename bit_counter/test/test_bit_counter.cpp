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
}

TEST(BitCounter, countBitsCached) {
    EXPECT_EQ(BitCounter::countBitsCached(0), 0);
    EXPECT_EQ(BitCounter::countBitsCached(1), 1);
    EXPECT_EQ(BitCounter::countBitsCached(2), 1);
    EXPECT_EQ(BitCounter::countBitsCached(3), 2);
    EXPECT_EQ(BitCounter::countBitsCached(0x55555555), 16);
    EXPECT_EQ(BitCounter::countBitsCached(0xFFFFFFFF), 32);
}

TEST(BitCounter, countBitsFast) {
    EXPECT_EQ(BitCounter::countBitsFast(0), 0);
    EXPECT_EQ(BitCounter::countBitsFast(1), 1);
    EXPECT_EQ(BitCounter::countBitsFast(2), 1);
    EXPECT_EQ(BitCounter::countBitsFast(3), 2);
    EXPECT_EQ(BitCounter::countBitsFast(0x55555555), 16);
    EXPECT_EQ(BitCounter::countBitsFast(0xFFFFFFFF), 32);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

