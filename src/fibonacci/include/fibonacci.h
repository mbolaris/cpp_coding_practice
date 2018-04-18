/*
 * fibonacci.h
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#ifndef FIBONACCI_H_
#define FIBONACCI_H_

#include <stdint.h>
#include <vector>

namespace fibonacci {
int64_t Naive(int n);

int64_t Memoized(int n);

constexpr int64_t Tabulation(int n) {
    int64_t first = 0;
    int64_t second = 1;
    int64_t next = 0;

    if (n < 1) {
        return first;
    }
    if (n == 1) {
        return second;
    }
    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }
    return second;
}
}  // namespace fibonacci

#endif  // FIBONACCI_H_
