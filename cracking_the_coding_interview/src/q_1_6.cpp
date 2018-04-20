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
    bool startedCompressing = false;
    int runLength = 0;
    char lastChar = str[0];
    std::string newString;

    for (auto i = 0; i < str.length(); i++) {
        if (str[i] == lastChar) {
            runLength++;
        } else {
            if (runLength > 2) {
                if (!startedCompressing) {
                    startedCompressing = true;
                    newString += str.substr(0, i - runLength + 1);
                } else {
                	newString += str[i - runLength + 1];
                }
                newString += std::to_string(runLength);
            }

            runLength = 0;
        }
    }

    if (startedCompressing) {
    	return newString;
    } else {
        return str;
    }

}

}  // namespace q_1_6

