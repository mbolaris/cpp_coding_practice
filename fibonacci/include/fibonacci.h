/*
 * fibonacci.h
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#ifndef CPP_FIBONACCI_INCLUDE_FIBONACCI_H_
#define CPP_FIBONACCI_INCLUDE_FIBONACCI_H_

#include <stdint.h>
#include <vector>

class Fibonacci {
 public:
    static int64_t naive(int n);
    static int64_t memoized(int n);
    static int64_t tabulation(int n);
 private:
    static int64_t memoized(int n, std::vector<int64_t>* pCache);
};

#endif /* CPP_FIBONACCI_INCLUDE_FIBONACCI_H_ */
