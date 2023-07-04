//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/3/23.
//
//  CS-135, Lab 4 part 1

// PSEUDOCODE
// NOTE: Put your function prototypes in a header file called "play.h", function definitions in an implementation file called "play.cpp", and have main only have the main function (be sure to use in your main and play.cpp: #include "play.h")

// PSEUDOCODE
// Function Definitions Needed: ####################################

// 00) void function displayInitialMenu
// fx input n/a
// fx output n/a
// -----------------------------------------------------------------------
// Output ROCK PAPER SCISSORS MENU" endl
// Output -------------------------" endl
// Output p)Play Game" endl
// Output q)Quit" endl
// Output Enter selection: endl
// ###########################################################################################

// 0) value returning function userQuits
// fx input n/a
// fx output bool
// -----------------------------------------------------------------------
// ##! REPEAT if INVALID:
// Output ROCK PAPER SCISSORS MENU endl
// Output ------------------------- endl
// Output p)Play Game endl
// Output q)Quit endl
// ##! Input Validation, can only enter p or q
// Output Invalid choice endl
// repeat
// if char == p -> userQuits = false
// if char == q -> userQuits = true
// return bool userQuits
// ###########################################################################################

// 1) void function displaySecondMenu
// fx input n/a
// fx output n/a
// -----------------------------------------------------------------------
// Output Rock, Paper or Scissors? endl
// Output 1) Rock endl
// Output 2) Paper endl
// Output 3) Scissors endl
// Output Please enter your choice:
// ###########################################################################################

// 2) value returning function getComputerChoice
// fx input n/a
// fx output int 1-3
// -----------------------------------------------------------------------
// set const int MIN_VALUE = 1;
// set const int MAX_VALUE = 3;
// computerPlayChoice = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
// return int computerPlayChoice
// ###########################################################################################

// 3) value returning function getPlayerChoice
// fx input n/a
// fx output int 1-3
// -----------------------------------------------------------------------
// ##! REPEAT if INVALID:
// call displaySecondMenu()
// Input variable int userPlayChoice
// ##! Input Validation, can only enter 1-3
// Output Invalid choice endl
// repeat
// return int userPlayChoice
// ###########################################################################################

// 4) value returning function isTie
// fx input 2 variables, int1 = userPlayChoice, int2 = computerPlayChoice
// fx output bool isTie
// -----------------------------------------------------------------------
// if userPlayChoice equals computerPlayChoice:
//    isTie = true
// else:
//    isTie = false
// return isTie
// ###########################################################################################

// 5) value returning function isPlayerWinner
// fx input 2 variables, int1 = userPlayChoice, int 2 = computerPlayChoice
// fx output bool isPlayerWinner -> can bool and fx have same name? lets see
// -----------------------------------------------------------------------
// if (userPlayChoice equals 1 and computerPlayChoice equals 3)
//    or (userPlayChoice equals 2 and computerPlayChoice equals 1)
//    or (userPlayChoice equals 3 and computerPlayChoice equals 2):
//    isPlayerWinner = true
// else:
//    isPlayerWinner = false
// return isPlayerWinner
// ###########################################################################################

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

// ###########################################################################################
// FUNCTION 00
// ###########################################################################################
void displayInitialMenu() {
    cout << "ROCK PAPER SCISSORS MENU" << endl;
    cout << "-------------------------" << endl;
    cout << "p)Play Game" << endl;
    cout << "q)Quit" << endl;
    cout << "Enter selection: ";
}

// ###########################################################################################
// FUNCTION 0
// ###########################################################################################
int userQuits() {
    // Declare local variables
    char userPlaysOrQuits;
    bool gameContinues;
    
    // Test if userQuits is being properly imported
    // cout << "userQuits Function Call" << endl;
    
    // ##! REPEAT if INVALID:
    displayInitialMenu();
    cin >> userPlaysOrQuits;
    
    // no while/true loops!
    // INPUT VALIDATION, can only enter q or p
    do {
        if (userPlaysOrQuits != 'q' && userPlaysOrQuits != 'p') {
            cout << "Invalid choice" << endl;

            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // have to remove for hypergrade compilation :(
            // Code to prevent infinite loop and computer crash

            displayInitialMenu();
            cin >> userPlaysOrQuits;
        }
        else if(userPlaysOrQuits == 'p') {
            return gameContinues = true;
        }
        else {
            cout << "Quitting" << endl;
            return gameContinues = false;
        }

    } while (userPlaysOrQuits != 'q' && userPlaysOrQuits != 'p');
    
    
    // Test if userQuits is being properly set
    // cout << "userQuits: " << userQuits << endl;
    
    return gameContinues;
};

// ###########################################################################################
// FUNCTION 1
// ###########################################################################################
void displaySecondMenu() {
    cout << "Rock, Paper or Scissors?" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
    cout << "Please enter your choice: ";
}

// ###########################################################################################
// FUNCTION 2
// ###########################################################################################
int getPlayerChoice() {
    // Declare local variable
    int userPlayChoice;
    
    // Test if getPlayerChoice is being properly imported
    // cout << "getPlayerChoice Function Call" << endl;
    
    // ##! REPEAT if INVALID:
    displaySecondMenu();
    cin >> userPlayChoice;
    
    // no while/true loops!
    // INPUT VALIDATION, can only enter 1-3
    do {
        if (userPlayChoice != 1 && userPlayChoice != 2 && userPlayChoice != 3) {
            cout << "Invalid choice" << endl;
            
            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // have to remove for hypergrade compilation :(
            // Code to prevent infinite loop and computer crash
            
            displaySecondMenu();
            cin >> userPlayChoice;
        }
        
    } while (userPlayChoice != 1 && userPlayChoice != 2 && userPlayChoice != 3);
    
    // Test if userPlayChoice is being properly set
    // cout << "userPlayChoice: " <<userPlayChoice << endl;
    
    return userPlayChoice;
};

// ###########################################################################################
// FUNCTION 3
// ###########################################################################################
int getComputerChoice() {
    // Declare local variables
    int computerPlayChoice;
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 3;
    
    // Test if getComputerChoice is being properly imported
    // cout << "getComputerChoice Function Call" << endl;
    
    computerPlayChoice = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    // Test if computerPlayChoice is being properly set
    // cout << "computerPlayChoice: " << computerPlayChoice << endl;
    
    return computerPlayChoice;
};

// ###########################################################################################
// FUNCTION 4
// ###########################################################################################
bool isTied(int userPlayChoice, int computerPlayChoice) {
    // Declare local variable
    bool isTie;
    
    // Test if isTied is being properly imported
    // cout << "isTied Function Call" << endl;
    
    if (userPlayChoice == computerPlayChoice) {
        isTie = true;
    }
    else isTie = false;
    
    // Test if isTie is being properly set
    // cout << "isTie: " << isTie << endl;
    
    return isTie;
}

// ###########################################################################################
// FUNCTION 5
// ###########################################################################################
bool isPlayerWinner(int userPlayChoice, int computerPlayChoice) {
    // Declare local variables
    bool isPlayerWinner;
    
    // Test if isPlayerWinner is being properly imported
    // cout << "isPlayerWinner Function Call" << endl;
    
    if ((userPlayChoice == 1 && computerPlayChoice == 3) ||  // Rock beats Scissors
        (userPlayChoice == 2 && computerPlayChoice == 1) ||  // Paper beats Rock
        (userPlayChoice == 3 && computerPlayChoice == 2)     // Scissors beats Paper
        ) {
            isPlayerWinner = true;
        } else {
            isPlayerWinner = false;
        }
    
    // Test if isPlayerWinner is being properly set
    // cout << "isPlayerWinner: " << isPlayerWinner << endl;
    
    return isPlayerWinner;
}

