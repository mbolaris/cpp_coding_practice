/*
 * fibonacci.h
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#ifndef FIBONACCI_INCLUDE_FIBONACCI_H_
#define FIBONACCI_INCLUDE_FIBONACCI_H_

#include <stdint.h>
#include <vector>

namespace Fibonacci {

int64_t naive(int n);

int64_t memoized(int n);

constexpr int64_t tabulation(int n) {
    int64_t first = 0;
    int64_t second = 1;
    int64_t next = 0;

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

}  // namespace Fibonacci

#endif  // FIBONACCI_INCLUDE_FIBONACCI_H_
