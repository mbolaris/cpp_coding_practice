/*
 * fibonacci_test.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/fibonacci.h"
#include "gtest/gtest.h"

TEST(fibonacci, Naive) {
    EXPECT_EQ(fibonacci::Naive(0), 0);
    EXPECT_EQ(fibonacci::Naive(1), 1);
    EXPECT_EQ(fibonacci::Naive(2), 1);
    EXPECT_EQ(fibonacci::Naive(3), 2);
    EXPECT_EQ(fibonacci::Naive(4), 3);
    EXPECT_EQ(fibonacci::Naive(5), 5);
    EXPECT_EQ(fibonacci::Naive(25), 75025);
    EXPECT_EQ(fibonacci::Naive(40), 102334155);
}

TEST(fibonacci, Memoized) {
    EXPECT_EQ(fibonacci::Memoized(0), 0);
    EXPECT_EQ(fibonacci::Memoized(1), 1);
    EXPECT_EQ(fibonacci::Memoized(2), 1);
    EXPECT_EQ(fibonacci::Memoized(3), 2);
    EXPECT_EQ(fibonacci::Memoized(4), 3);
    EXPECT_EQ(fibonacci::Memoized(5), 5);
    EXPECT_EQ(fibonacci::Memoized(25), 75025);
    EXPECT_EQ(fibonacci::Memoized(40), 102334155);
}

TEST(fibonacci, memoized_25x10000000) {
    for (int i = 0; i < 1000000; i++) {
        EXPECT_EQ(fibonacci::Memoized(25), 75025);
    }
}

TEST(fibonacci, memoized_40x10000000) {
    for (int i = 0; i < 1000000; i++) {
        EXPECT_EQ(fibonacci::Memoized(40), 102334155);
    }
}

TEST(fibonacci, Tabulation) {
    EXPECT_EQ(fibonacci::Tabulation(0), 0);
    EXPECT_EQ(fibonacci::Tabulation(1), 1);
    EXPECT_EQ(fibonacci::Tabulation(2), 1);
    EXPECT_EQ(fibonacci::Tabulation(3), 2);
    EXPECT_EQ(fibonacci::Tabulation(4), 3);
    EXPECT_EQ(fibonacci::Tabulation(5), 5);
    EXPECT_EQ(fibonacci::Tabulation(25), 75025);
    EXPECT_EQ(fibonacci::Tabulation(40), 102334155);
}

TEST(fibonacci, tabulation_25x10000000) {
    for (int i = 0; i < 1000000; i++) {
        EXPECT_EQ(fibonacci::Tabulation(25), 75025);
    }
}

TEST(fibonacci, tabulation_40x10000000) {
    for (int i = 0; i < 1000000; i++) {
        EXPECT_EQ(fibonacci::Tabulation(40), 102334155);
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


