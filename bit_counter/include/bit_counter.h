/*
 * bit_countier.h
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#ifndef CPP_BIT_COUNTER_INCLUDE_BIT_COUNTER_H_
#define CPP_BIT_COUNTER_INCLUDE_BIT_COUNTER_H_

int CountBits(int i);

class BitCounter {
 public:
    static int countBitsSlow(unsigned int value);
    static int countBitsCached(unsigned int value);
    static int countBitsFast(unsigned int value);
 private:
    static int* getBitTabel();
    static int* pBitTable;
};

#endif /* CPP_BIT_COUNTER_INCLUDE_BIT_COUNTER_H_ */
