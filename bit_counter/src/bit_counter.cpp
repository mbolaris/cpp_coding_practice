/*
 * bit_counting.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/bit_counter.h"

int BitCounter::countBitsSlow(unsigned int value) {
    int bitCount = 0;
    while (value > 0) {
        if (value & 1) {
            bitCount++;
        }
        value >>= 1;
    }
    return bitCount;
}
