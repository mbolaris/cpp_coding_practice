/*
 * q_1_5.h
 *
 *  Copyright 2018 Bolaris Engineering
 *
 */

#ifndef Q_1_5_H_
#define Q_1_5_H_

#include <string>
#include<iostream>

namespace q_1_5 {
bool IsOneEditAway(const std::string& str1, const std::string& str2) {
    if ((str1.length() < str2.length()) ? (str2.length() - str1.length())
                                        : (str1.length() - str2.length()) > 1) {
        return false;
    }

    int diffs = 0;
    auto c1 = str1.begin();
    auto c2 = str2.begin();
    while (c1 != str1.end() && c2 != str2.end()) {
        if (*c1 == *c2) {
            c1++;
            c2++;
        } else {
            diffs++;
            if (diffs > 1) {
                return false;
            }

            if (str1.length() == str2.length()) {
                c1++;
                c2++;
            } else if (str1.length() > str2.length()) {
                c1++;
            } else {
                c2++;
            }
        }
    }
    return true;
}
}  // namespace q_1_5

#endif /* Q_1_5_H_ */
