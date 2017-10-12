/*
 * q_1_1.h
 *
 *  Copyright 2017 Bolaris Engineering
 *
 *  Implement an algorithm to determine if a string has all unique characters.
 *  What if you cannot use additional data structures?
 *
 */

#include "../include/q_1_1.h"
#include <string>
#include <bitset>

namespace q_1_1 {

    bool isUniqueArrayImp(const char* str) {
        bool seen[256] = {false};
        const char* c = str;
        while (*c) {
            if (seen[*c]) {
                return false;
            } else {
                seen[*c] = true;
                c++;
            }
        }
        return true;
    }

    bool isUniqueBitsetImp(const std::string &str) {
        std::bitset<128> seen;
        for (char character : str) {
            if (seen[static_cast<int>(character)]) {
                return false;
            } else {
                seen.flip(static_cast<int>(character));
            }
        }
        return true;
    }

}  // namespace q_1_1

