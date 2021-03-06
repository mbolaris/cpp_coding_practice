/*
 * q_1_3.cpp
 *
 *  Copyright 2017 Bolaris Engineering
 *
 *  URLify: Write a method to replace all spaces in a string with '%20' You may
 *  assume that the string has sufficient space at the end to hold the
 *  additional characters.
 *
 */

#include "../include/q_1_3.h"
#include <cstring>

namespace q_1_3 {
void Urlify(char str[]) {
    size_t newLen = strlen(str);

    for (size_t i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            newLen += 2;
        }
    }

    size_t writeIndex = newLen - 1;

    for (int i = static_cast<int>(strlen(str)) - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[writeIndex--] = '0';
            str[writeIndex--] = '2';
            str[writeIndex--] = '%';
        } else {
            str[writeIndex--] = str[i];
        }
    }
}
}  // namespace q_1_3
