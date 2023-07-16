//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/13/23.
// Lab 6 Part 1, CS-135
//
// PSEUDOCODE
// declare FUNCTION MAIN()
// #### DECLARE VARS ####
// playerContinues <- true
// playerName <- empty string
// userTicketString <- empty string
// winningNumsString <- empty string
// playerSelection <- uninitialized
// numMatches <- uninitialized
// userTicket[LOTTO_PICK_ARRAY_SIZE] <- initialized with 0
// winningNums[LOTTO_PICK_ARRAY_SIZE] <- initialized with 0
// srand(13)

// DISPLAY "Please enter your name: "
// READ playerName
// DISPLAY newline

// #### DO WHILE STATEMENT ####
// DO
//     DISPLAYMENU()
//     READ playerSelection

// #### FIRST SWITCH STATEMENT ####
//     SWITCH playerSelection
//     CASE 0:
//         DISPLAY "Quitting the program."
//         playerContinues <- false
//         BREAK

//     CASE 1:
//         getLottoPicks(userTicket)
//         genWinNums(winningNums)
//         userTicketString <- convertToString(userTicket)
//         winningNumsString <- convertToString(winningNums)
//         numMatches <- countMatches(userTicket, winningNums)

//         DISPLAY newline
//         DISPLAY "Lottery Results for " + playerName
//         DISPLAY "---------------------"
//         DISPLAY "Winning Numbers: " + winningNumsString + " "
//         DISPLAY playerName + "'s Ticket  : " + userTicketString + " "
//         DISPLAY newline
//         DISPLAY "RESULTS:"
//         DISPLAY "--------"
//         DISPLAY "Number of Matches: " + numMatches

// #### SECOND SWITCH STMT ####
//         SWITCH numMatches
//         CASE 3:
//             DISPLAY "Winnings       : Congratulations! You win a FREE TICKET"
//             BREAK
//         CASE 4:
//             DISPLAY "Winnings       : Congratulations! You win $100"
//             BREAK
//         CASE 5:
//             DISPLAY "Winnings       : Congratulations! You win $5,000"
//             BREAK
//         CASE 6:
//             DISPLAY "Winnings       : Congratulations! You win $100,000"
//             BREAK
//         CASE 7:
//             DISPLAY "Winnings       : JACKPOT! Congratulations! You win 1 MILLION"
//             BREAK
//         DEFAULT:
//             DISPLAY "Winnings       : Sorry, no winning numbers matched"
//             BREAK
//         END SWITCH

//         DISPLAY newline
//         BREAK

//     DEFAULT:
//         DISPLAY "Invalid Selection. Please try again."
//     END SWITCH

// WHILE playerContinues

// RETURN 0
// END FUNCTION

#include "lotto.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int lab6part1() {
    bool playerContinues = true;
    string playerName;
    string userTicketString;
    string winningNumsString;
    int playerSelection;
    int numMatches;
    int userTicket[LOTTO_PICK_ARRAY_SIZE] = {};
    int winningNums[LOTTO_PICK_ARRAY_SIZE] = {};
    srand(13);

    cout << "Please enter your name: ";
    getline(cin, playerName);
    cout << endl;
    do {
        displayMenu();
        cin >> playerSelection;
        
        switch (playerSelection) {
            case 0: {
                cout << "Quitting." << endl;
                playerContinues = false;
                break;
            }
            case 1: {
                getLottoPicks(userTicket);
                genWinNums(winningNums);
                userTicketString = convertToString(userTicket);
                winningNumsString = convertToString(winningNums);
                numMatches = countMatches(userTicket, winningNums);
                cout << endl;
                cout << playerName << "'s LOTTO RESULTS" << endl;
                cout << "---------------------" << endl;
                cout << "WINNING TICKET NUMBERS: " << winningNumsString << " " << endl;
                cout << playerName << "'S TICKET        : " << userTicketString << " " << endl;
                cout << endl;
                cout << "RESULTS:" << endl;
                cout << "--------" << endl;
                cout << "Number Matches: " << numMatches << endl;
                cout << "Winnings       : ";
                switch (numMatches) {
                    case 3: {
                        cout << "FREE TICKET" << endl;
                        break;
                    }
                    case 4: {
                        cout << "NOT BAD - $100" << endl;
                        break;
                    }
                    case 5: {
                        cout << "LUCKY YOU! - $5,000" << endl;
                        break;
                    }
                    case 6: {
                        cout << "GREAT! - $100,000" << endl;
                        break;
                    }
                    case 7: {
                        cout << "JACKPOT - 1 MILLION" << endl;
                        break;
                    }
                    default: {
                        cout << "SORRY NOTHING" << endl;
                        break;
                    }
                }
                cout << endl;
                break;
            }
            default: {
                cout << "Invalid Selection." << endl;
            }
        }
    } while (playerContinues);
    
    return 0;
}

