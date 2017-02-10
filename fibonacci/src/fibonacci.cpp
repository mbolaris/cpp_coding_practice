/*
 * fibonacci.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 *  A variety of methods for computing the nth fibonacci number
 */

#include "../include/fibonacci.h"
#include <iostream>
#include <vector>


int64_t Fibonacci::naive(int n) {
    if (n < 1) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (naive(n - 1) + naive(n - 2));
    }
}

int64_t Fibonacci::memoized(int n) {
    std::vector<int64_t> cache(n + 1, 0);
    return memoized(n, &cache);
}

int64_t Fibonacci::memoized(int n,  std::vector<int64_t>* pCache) {
    if (n < 1) {
        return 0;
    } else if (n == 1) {
        (*pCache)[n] = 1;
    } else if ((*pCache)[n] == 0) {
        (*pCache)[n] = memoized(n - 1, pCache) + memoized(n - 2, pCache);
    }

    return (*pCache)[n];
}

int64_t Fibonacci::tabulation(int n) {
    int64_t first = 0;
    int64_t second = 1;
    int64_t next;

    if (n < 1) {
        return first;
    } else if (n == 1) {
        return second;
    } else {
        for (int i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
    }

    return second;
}
