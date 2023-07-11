//
//  string.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/10/23.
//
// PSEUDOCODE

// 1) value returning function inverse
// fx input string
// fx output string
// -----------------------------------------------------------------------
// function string inverse(string str)
//    for i = 0 to str.length() - 1
//        if islower(str[i]) then
//            str[i] = toupper(str[i])
//        else if isupper(str[i]) then
//            str[i] = tolower(str[i])
//        end if
//    end for
//    return str
// end function
// ###########################################################################################

// 2) value returning function reverse
// fx input string
// fx output string
// -----------------------------------------------------------------------
// function string reverse(string str)
//    int start = 0
//    int end = str.length() - 1
//    while start < end do
//        swap(str[start], str[end])
//        start = start + 1
//        end = end - 1
//    end while
//    return str
// end function
// ###########################################################################################

// 3) value returning function toUpper
// fx input string
// fx output string
// -----------------------------------------------------------------------
// function string toUpper(string str)
//    for i = 0 to str.length() - 1
//        if islower(str[i]) then
//            str[i] = toupper(str[i])
//        end if
//    end for
//    return str
// end function
// ###########################################################################################

// 4) value returning function countWords
// fx input string
// fx output int
// -----------------------------------------------------------------------
// function int countWords(string str)
//    int wordCount = 0
//    bool inWord = false
//
//    for ch in str
//        if isalpha(ch) or isdigit(ch) then
//            if not inWord then
//                wordCount = wordCount + 1
//                inWord = true
//            end if
//        else
//            inWord = false
//        end if
//    end for
//
//    return wordCount
// end function

// ###########################################################################################

// 5) value returning function countConsonants
// fx input string
// fx output int
// -----------------------------------------------------------------------
// function int countConsonants(string str)
//    int count = 0
//
//    for c in str
//        if isalpha(c) then
//            if c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' then
//                // Character is a vowel
//                continue
//            else
//                count = count + 1
//            end if
//        end if
//    end for
//
//    return count
// end function
// ###########################################################################################

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

// ###########################################################################################
// FUNCTION 1
// ###########################################################################################
string inverse(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }
    return str;
}

// ###########################################################################################
// FUNCTION 2
// ###########################################################################################
string reverse(string str) {
    int start = 0;
    int end = str.length() - 1;
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    return str;
}

// ###########################################################################################
// FUNCTION 3
// ###########################################################################################
string toUpper(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
    }
    return str;
}

// ###########################################################################################
// FUNCTION 4
// ###########################################################################################
int countWords(string str) {
    int wordCount = 0;
    bool inWord = false;

    for (char ch : str) {
        if (isalpha(ch) || isdigit(ch)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return wordCount;
}
    
    // ###########################################################################################
    // FUNCTION 5
    // ###########################################################################################
    int countConsonants(string str) {
        int consonantCount = 0;
        for (char c : str) {
            if(isalpha(c)) {
                if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    continue;
                }
                else {
                    consonantCount++;
                }
            }
        }
        return consonantCount;
    }

