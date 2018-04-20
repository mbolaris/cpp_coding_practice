/*
 * q_1_5.h
 *
 *  Copyright 2018 Bolaris Engineering
 *
 */

#ifndef Q_1_5_H_
#define Q_1_5_H_

#include <string>

namespace q_1_5 {
constexpr bool IsOneEditAway(const std::string& str1, const std::string& str2) {
    if ((str1.length() < str2.length()) ? (str2.length() - str1.length())
                                        : (str1.length() - str2.length()) > 1) {
        return false;
    }

    int diffs = 0;
    size_t i = 0;
    size_t j = 0;
    while (i < str1.length() && j < str2.length()) {
        if (str1[i] == str2[j]) {
           i++;
           j++;
        } else {
            diffs++;
            if (diffs > 1) {
                return false;
            }
            if (str1.length() == str2.length()) {
                i++;
                j++;
            } else if (str1.length() > str2.length()) {
                i++;
            } else {
                j++;
            }
        }
    }
    return true;
}
}  // namespace q_1_5

#endif /* Q_1_5_H_ */
