/*
 * fibonacci_test.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/bit_counter.h"
#include "gtest/gtest.h"

TEST(bit_counter, CountBitsSlow) {
    EXPECT_EQ(bit_counter::CountBitsSlow(0), 0);
    EXPECT_EQ(bit_counter::CountBitsSlow(1), 1);
    EXPECT_EQ(bit_counter::CountBitsSlow(2), 1);
    EXPECT_EQ(bit_counter::CountBitsSlow(3), 2);
    EXPECT_EQ(bit_counter::CountBitsSlow(0x55555555), 16);
    EXPECT_EQ(bit_counter::CountBitsSlow(0xFFFFFFFF), 32);

    for (int i = 0; i < 1000000; i++) {
        EXPECT_EQ(bit_counter::CountBitsSlow(0x55555555), 16);
    }
}

TEST(bit_counter, CountBitsFast) {
    EXPECT_EQ(bit_counter::CountBitsFast(0), 0);
    EXPECT_EQ(bit_counter::CountBitsFast(1), 1);
    EXPECT_EQ(bit_counter::CountBitsFast(2), 1);
    EXPECT_EQ(bit_counter::CountBitsFast(3), 2);
    EXPECT_EQ(bit_counter::CountBitsFast(0x55555555), 16);
    EXPECT_EQ(bit_counter::CountBitsFast(0xFFFFFFFF), 32);

    for (int i = 0; i < 1000000; i++) {
        EXPECT_EQ(bit_counter::CountBitsFast(0x55555555), 16);
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

