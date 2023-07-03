//
//  play.h
//  labs
//
//  Created by Lucie Chevreuil on 7/3/23.
//  CS-135, Lab 4 part 1
//

#ifndef play_h
#define play_h

#include <iostream>

// PSEUDOCODE
// NOTE: Put your function prototypes in a header file called "play.h", function definitions in an implementation file called "play.cpp", and have main only have the main function (be sure to use in your main and play.cpp: #include "play.h")

// PSEUDOCODE
// Function Prototypes Needed: ####################################

// 00) void function displayFirstMenu
// fx input n/a
// fx output n/a
void displayInitialMenu();

// 0) value returning function userQuits
// fx input char
// fx output bool
bool userQuits();

// 1) void function displaySecondMenu
// fx input n/a
// fx output n/a
void displaySecondMenu();

// 2) value returning function getComputerChoice
// fx input n/a
// fx output int 1-3
int getPlayerChoice();

// 3) value returning function getPlayerChoice
// fx input n/a
// fx output int 1-3
int getComputerChoice();

// 4) value returning function isTie
// fx input 2 variables, int1 = userPlayChoice, int 2 = computerPlayChoice
// fx output bool isTie
bool isTied(int, int);

// 5) value returning function isPlayerWinner
// fx input 2 variables, int1 = userPlayChoice, int 2 = computerPlayChoice
// fx output bool isPlayerWinner -> can bool and fx have same name? lets see
bool isPlayerWinner(int, int);

// Test if header file is properly imported
//void printHelloWorld() {
//    std::cout << "Hello, World!" << std::endl;
//}

#endif /* play_h */
