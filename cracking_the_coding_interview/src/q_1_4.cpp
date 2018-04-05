/*
 * q_1_4.h
 *
 *  Copyright 2017 Bolaris Engineering
 *
 *  Given a string, write a function to check if it is a permutation of a palindrome.
 *  A permutation is a rearrangement of letters.The palindrome does not need to be
 *  limited to just dictionary words.
 *  EXAMPLE
 *  Input: Tact Coa
 *  Output: True (permutations: "taco cat". "atco cta". etc.)
 *
 */

#include <unordered_map>
#include <string>

#include "../include/q_1_4.h"

namespace q_1_4 {

bool isPalindromePermutation(std::string str) {
    std::unordered_map<char, int> charCounts;
    int oddCount = 0;
    for (char c : str) {
        if (isalpha(c)) {
            charCounts[tolower(c)]++;

            if (charCounts[tolower(c)] % 2) {
                oddCount++;
            } else {
                oddCount--;
            }
        }
    }
    return (oddCount <= 1);
}

}  // namespace q_1_4

