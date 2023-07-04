//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/3/23.
//  CS-135, Lab 4 part 1
//
// PSEUDOCODE
// NOTE: Put your function prototypes in a header file called "play.h", function definitions in an implementation file called "play.cpp", and have main only have the main function (be sure to use in your main and play.cpp: #include "play.h")

// Variables - NO GLOBALS - 12 total
// variable definitions Pseudocode located in play.cpp
// const int MIN_VALUE = 1;
// const int MAX_VALUE = 3;
// char userPlaysOrQuits
// int userPlayChoice, computerPlayChoice
// bool gameContinues, userQuits, isTie, isPlayerWinner, isPlayerWon
// string userDisplayChoice, computerDisplayChoice

// Functions - NO VOID - 7 total
// function definitions Pseudocode located in play.cpp
// 00) void function displayFirstMenu
// 0) value returning function userQuits
// 1) void function displayMenu
// 2) value returning function getComputerChoice, return int
// 3) value returning function getPlayerChoice, return int
// 4) value returning function isTie, return bool
// 5) value returning function isPlayerWinner, return bool

// GAME LOGIC
// Set Variables:
// bool gameContinues, isTie, isPlayerWon
// int userPlayChoice, computerPlayChoice
// string userDisplayChoice, computerDisplayChoice
//
// use: srand((unsigned)time(NULL)) for testing
// use: srand(13) for hypergrade
//
// Do While Loop:
//    Set gameContinues by calling the userQuits function
//    If gameContinues is false:
//        Break the loop
//
//    Get the user's play choice and assign it to userPlayChoice
//    Assign userDisplayChoice based on userPlayChoice:
//        - If userPlayChoice is 1, assign "Rock" to userDisplayChoice
//        - If userPlayChoice is 2, assign "Paper" to userDisplayChoice
//        - If userPlayChoice is 3, assign "Scissors" to userDisplayChoice
//    Output "You chose: " userDisplayChoice endl
//
//    Get the computer's play choice and assign it to computerPlayChoice
//    Assign computerDisplayChoice based on computerPlayChoice:
//        - If computerPlayChoice is 1, assign "Rock" to computerDisplayChoice
//        - If computerPlayChoice is 2, assign "Paper" to computerDisplayChoice
//        - If computerPlayChoice is 3, assign "Scissors" to computerDisplayChoice
//    Output "The computer chose: " computerDisplayChoice endl
//
//    Determine if the game is a tie by calling the isTied function with userPlayChoice and computerPlayChoice as arguments, and assign the result to isTie
//    Determine if the player has won by calling the isPlayerWinner function with userPlayChoice and computerPlayChoice as arguments, and assign the result to isPlayerWon
//
//    If isTie is true:
//        Output "It's a TIE!"
//    Else if isPlayerWon is true:
//        Output "You WIN!"
//    Else:
//        Output "Sorry you LOSE."
//
// Repeat the loop while gameContinues is true



#include "play.h"
#include <stdio.h>

using namespace std;

// RENAME FX TO MAIN FOR IT TO RUN
int main() {
    bool gameContinues, isTie, isPlayerWon;
    string userDisplayChoice, computerDisplayChoice;
    int userPlayChoice, computerPlayChoice;
    
//    srand((unsigned)time(NULL)); // For testing, picks 1-3
     srand(13); // For hypergrade, always picks 2

    do {
        gameContinues = userQuits();

        if (!gameContinues) {
            break;
        }
        
        userPlayChoice = getPlayerChoice();
        userDisplayChoice = (userPlayChoice == 1) ? "Rock" : (userPlayChoice == 2) ? "Paper" : "Scissors";
        cout << "You chose: " << userDisplayChoice << endl;

        computerPlayChoice = getComputerChoice();
        computerDisplayChoice = (computerPlayChoice == 1) ? "Rock" : (computerPlayChoice == 2) ? "Paper" : "Scissors";
        cout << "The computer chose: " << computerDisplayChoice << endl;
        
        isTie = isTied(userPlayChoice, computerPlayChoice);
        isPlayerWon = isPlayerWinner(userPlayChoice, computerPlayChoice);
        
        if(isTie) {
            cout << "It's a TIE!" << endl;
        }
        else if(isPlayerWon) {
            cout << "You WIN!" << endl;
        }
        else {
            cout << "Sorry you LOSE." << endl;
        }

    } while (gameContinues);

    return 0;
}
