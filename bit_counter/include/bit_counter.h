/*
 * bit_counter.h
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#ifndef BIT_COUNTER_INCLUDE_BIT_COUNTER_H_
#define BIT_COUNTER_INCLUDE_BIT_COUNTER_H_

namespace BitCounter {

constexpr int countBitsSlow(unsigned int value) {
    int bitCount = 0;
    while (value > 0) {
        if (value & 1) {
            bitCount++;
        }
        value >>= 1;
    }
    return bitCount;
}

constexpr int countBitsFast(unsigned int value) {
    value = value - ((value >> 1) & 0x55555555);
    value = (value & 0x33333333) + ((value >> 2) & 0x33333333);
    return (((value + (value >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

};  // namespace BitCounter

#endif  // BIT_COUNTER_INCLUDE_BIT_COUNTER_H_
