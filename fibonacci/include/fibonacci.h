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

class Fibonacci {
public:
    static int64_t naive(int n);
    static int64_t memoized(int n);
    static int64_t tabulation(int n);

private:
    static int64_t memoized(int n, std::vector<int64_t>& cache);
};

#endif /* FIBONACCI_INCLUDE_FIBONACCI_H_ */
