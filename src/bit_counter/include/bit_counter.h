/*
 * bit_counter.h
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#ifndef BIT_COUNTER_H_
#define BIT_COUNTER_H_

namespace bit_counter {
constexpr int CountBitsSlow(unsigned int value) {
    int bitCount = 0;
    while (value > 0) {
        if ((value & 1) != 0) {
            bitCount++;
        }
        value >>= 1;
    }
    return bitCount;
}

constexpr int CountBitsFast(unsigned int value) {
    value = value - ((value >> 1) & 0x55555555);
    value = (value & 0x33333333) + ((value >> 2) & 0x33333333);
    return (((value + (value >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}
}  // namespace bit_counter

#endif  // BIT_COUNTER_H_
