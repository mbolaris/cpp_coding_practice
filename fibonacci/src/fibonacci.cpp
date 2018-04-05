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

namespace Fibonacci {

int64_t memoized(int n, std::vector<int64_t>& cache);

int64_t naive(int n) {
	if (n < 1) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return (naive(n - 1) + naive(n - 2));
	}
}

int64_t memoized(int n) {
	std::vector<int64_t> cache(n + 1, 0);
	return memoized(n, cache);
}

int64_t memoized(int n, std::vector<int64_t>& cache) {
	if (n < 1) {
		return 0;
	} else if (n == 1) {
		cache[n] = 1;
	} else if (cache[n] == 0) {
		cache[n] = memoized(n - 1, cache) + memoized(n - 2, cache);
	}

	return cache[n];
}

}
