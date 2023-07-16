//
//  lotto.hpp
//  labs
//
//  Created by Lucie Chevreuil on 7/13/23.
//  Lab 6 Part 1, CS-135
//

#ifndef lotto_hpp
#define lotto_hpp

#include <stdio.h>
#include <iostream>
#include <string>

// PSEUDOCODE

// Global Constants: ####################################
const int LOTTO_PICK_ARRAY_SIZE = 7;

// Function Prototypes Needed: ####################################

// 1) void function displayMenu
// fx input n/a
// fx output n/a
void displayMenu();


// 2) void function getLottoPicks
// fx input array
// fx output n/a
void getLottoPicks(int []);

// 3) void function genWinNums
// fx input array
// fx output n/a
void genWinNums (int[]);

// 3) void function noDuplicates, noInvalidPicks
// fx input array
// fx output bool
bool noDuplicates (int[], int);

// 4) void function zero
// fx input array
// fx output n/a
void zero(int[]);

// 5) value returning function countMatches
// fx input array1, array2
// fx output int
int countMatches(int[], int[]);

// 6) value returning function convertToString
// fx input array
// fx output string
std::string convertToString(int[]);



#endif /* lotto_hpp */
