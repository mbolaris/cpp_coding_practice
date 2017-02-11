/*
 * bit_counting.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/bit_counter.h"
#include <math.h>
#include <iostream>


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

int BitCounter::countBitsFast(unsigned int value) {
    value = value - ((value >> 1) & 0x55555555);
    value = (value & 0x33333333) + ((value >> 2) & 0x33333333);
    return (((value + (value >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int BitCounter::countBitsCached(unsigned int value) {
    int bitCount = 0;

    for (int i = 0; i < sizeof(value); i++) {
        bitCount += getBitTabel()[value & 0x000000ff];
        value >>= 8;
    }

    return bitCount;
}

int* BitCounter::pBitTable = NULL;

int* BitCounter::getBitTabel() {
    if (BitCounter::pBitTable == NULL) {
        BitCounter::pBitTable = new int[256];

        for (int i = 0; i < 256; i++) {
            BitCounter::pBitTable[i] = countBitsSlow(i);
        }
    }

    return BitCounter::pBitTable;
}
