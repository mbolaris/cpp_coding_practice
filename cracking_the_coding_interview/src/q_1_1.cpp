/*
 * q_1_1.h
 *
 *  Copyright 2017 Bolaris Engineering
 *
 */

#include "../include/q_1_1.h"

bool Q_1_1::isUnique(const char* str) {
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


