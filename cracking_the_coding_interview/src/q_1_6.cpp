/*
 * q_1_6.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 * String Compression: Implement a method to perform basic string compression
 * using the counts of repeated characters. For example, the string aabcccccaaa
 * would become a2b1c5a3. If the "compressed" string would not become smaller
 * than the original string, your method should return the original string.
 * You can assume the string has only uppercase and lowercase letters (a - z).
 *
 */

#include "../include/q_1_6.h"

namespace q_1_6 {

std::string Compress(const std::string& str) {
    int runLength = 0;
    char lastChar = str[0];
    std::string newString;

    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == lastChar) {
            runLength++;
        } else {
            newString += str[i - runLength];
            newString += std::to_string(runLength);
            runLength = 1;
        }
        lastChar  = str[i];
    }

    newString += str[str.length() - runLength];
    newString += std::to_string(runLength);

    if (newString.length() < str.length()) {
        return newString;
    } else {
        return str;
    }
}

}  // namespace q_1_6

