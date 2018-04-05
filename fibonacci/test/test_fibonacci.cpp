/*
 * fibonacci_test.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/fibonacci.h"
#include "gtest/gtest.h"

TEST(Fibonacci, naive) {
    EXPECT_EQ(Fibonacci::naive(0), 0);
    EXPECT_EQ(Fibonacci::naive(1), 1);
    EXPECT_EQ(Fibonacci::naive(2), 1);
    EXPECT_EQ(Fibonacci::naive(3), 2);
    EXPECT_EQ(Fibonacci::naive(4), 3);
    EXPECT_EQ(Fibonacci::naive(5), 5);
    EXPECT_EQ(Fibonacci::naive(25), 75025);
    EXPECT_EQ(Fibonacci::naive(40), 102334155);
}

TEST(Fibonacci, memoized) {
    EXPECT_EQ(Fibonacci::memoized(0), 0);
    EXPECT_EQ(Fibonacci::memoized(1), 1);
    EXPECT_EQ(Fibonacci::memoized(2), 1);
    EXPECT_EQ(Fibonacci::memoized(3), 2);
    EXPECT_EQ(Fibonacci::memoized(4), 3);
    EXPECT_EQ(Fibonacci::memoized(5), 5);
    EXPECT_EQ(Fibonacci::memoized(25), 75025);
    EXPECT_EQ(Fibonacci::memoized(40), 102334155);
}

TEST(Fibonacci, memoized_40x1000000) {
    for (int i = 0; i < 100000; i++) {
        EXPECT_EQ(Fibonacci::memoized(40), 102334155);
    }
}


TEST(Fibonacci, tabulation) {
    EXPECT_EQ(Fibonacci::tabulation(0), 0);
    EXPECT_EQ(Fibonacci::tabulation(1), 1);
    EXPECT_EQ(Fibonacci::tabulation(2), 1);
    EXPECT_EQ(Fibonacci::tabulation(3), 2);
    EXPECT_EQ(Fibonacci::tabulation(4), 3);
    EXPECT_EQ(Fibonacci::tabulation(5), 5);
    EXPECT_EQ(Fibonacci::tabulation(25), 75025);
    EXPECT_EQ(Fibonacci::tabulation(40), 102334155);
}

TEST(Fibonacci, tabulation_40x1000000) {
    for (int i = 0; i < 100000; i++) {
        EXPECT_EQ(Fibonacci::tabulation(40), 102334155);
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


