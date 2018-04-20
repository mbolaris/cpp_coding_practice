/*
 * q_1_2.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 *  Given two strings, write a method to decide if one is a permutation of the other.
 *
 */

#include "../include/q_1_2.h"
#include <string>

namespace q_1_2 {
    bool IsPermutation(const std::string &strA, const std::string &strB) {
        if (strA.length() != strB.length()) {
            return false;
        }

        // assuming ascii only
        int charCounts[128] = {0};

        for (char character : strA) {
            charCounts[static_cast<unsigned char>(character)]++;
        }

        for (char character : strB) {
            charCounts[static_cast<unsigned char>(character)]--;
            if (charCounts[static_cast<unsigned char>(character)] < 0) {
                return false;
            }
        }
        return true;
    }
}  // namespace q_1_2

