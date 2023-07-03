//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 6/28/23.
//
//  CS-135, Lab 3 part 1

// PSEUDOCODE
// Variable declarations
// char randomSeedBool;
// int numRolls;
// int rollCount1 = 0, rollCount2 = 0, rollCount3 = 0, rollCount4 = 0, rollCount5 = 0, rollCount6 = 0;

// Output Use value 7 as a random seed (y/n)?
// Input boolean (variable randomSeedBool) endl
// Output Please enter in number of rolls:
// Input integer (variable numRolls) endl
// ##! INPUT VALIDATION, numRolls > 1
// ##! Output Error Please enter rolls > 1 endl
// ##! Output Please enter in number of rolls:
// ##! Input integer (variable numRolls) endl
// Output Endl

// Switch Statement
// Switch currentRoll
// Case X: rollCountX++
// Break
// -> Repeat 1-6
// Default:
// Break

// COMPUTATIONS:
// count numRolls per dice side 1-6
// numRolls/totalRollnumRolls/totalRolls dice side 1-6 as a %

// Output Results Chart:
// DICE ROLL STATISTICS endl
// Output Endl
// # Rolled  # Times    % Times endl
// --------  -------    ------- endl
// Output Endl
//    1        numCount1       numCount1/totalRolls% endl
//    2        numCount2       numCount2/totalRolls% endl
//    3        numCount3       numCount3/totalRolls% endl
//    4        numCount4       numCount4/totalRolls% endl
//    5        numCount5       numCount5/totalRolls% endl
//    6        numCount6       numCount6/totalRolls% endl

// Test1: Does numCount1+2+3+4+5+6 == numRolls?
// Test2: Does numCount1/numRolls%+2+3+4+5+6 == 100%?

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// RENAME FX TO MAIN FOR IT TO RUN
int lab3part1() {
    // VARIABLE DECLARATION
    char randomSeedBool;
    int numRolls;
    int rollCount1 = 0, rollCount2 = 0, rollCount3 = 0, rollCount4 = 0, rollCount5 = 0, rollCount6 = 0;

    // RANDOMNESS SET
    cout << "Use value 7 as a random seed (y/n)? ";
    cin >> randomSeedBool;
    if (randomSeedBool == 'y') {
        srand(7);
    } else {
        srand((unsigned)time(NULL));
    }

    cout << "Please enter in number of rolls: ";
    cin >> numRolls;

    // no while/true loops!
    // INPUT VALIDATION
    do {
        if (numRolls <= 1) {
            cout << "Please enter rolls > 1\n";
            cin.clear();  // Prevent infinite loop and computer crash
            cout << "Please enter in number of rolls: ";
            cin >> numRolls;
            cout << endl;
        }
    } while (numRolls <= 1);

    // PERFORM DICE ROLLS
    for (int i = 0; i < numRolls; i++) {
        int roll = rand() % 6 + 1;
        
        // SWITCH STATEMENT FOR SPEED
        switch (roll) {
            case 1:
                rollCount1++;
                break;
            case 2:
                rollCount2++;
                break;
            case 3:
                rollCount3++;
                break;
            case 4:
                rollCount4++;
                break;
            case 5:
                rollCount5++;
                break;
            case 6:
                rollCount6++;
                break;
            default:
                break;
        }

    }

    // FINAL CALCULATION OUTPUT
    cout << "DICE ROLL STATISTICS\n";
    cout << endl;
    cout << "# Rolled  # Times    % Times\n";
    cout << "--------  -------    -------\n";
    cout << endl;

    cout << setw(5) << 1 << setw(9) << rollCount1 << setw(12) << fixed << setprecision(2) << (rollCount1 / static_cast<double>(numRolls)) * 100 << "%\n";
    cout << setw(5) << 2 << setw(9) << rollCount2 << setw(12) << fixed << setprecision(2) << (rollCount2 / static_cast<double>(numRolls)) * 100 << "%\n";
    cout << setw(5) << 3 << setw(9) << rollCount3 << setw(12) << fixed << setprecision(2) << (rollCount3 / static_cast<double>(numRolls)) * 100 << "%\n";
    cout << setw(5) << 4 << setw(9) << rollCount4 << setw(12) << fixed << setprecision(2) << (rollCount4 / static_cast<double>(numRolls)) * 100 << "%\n";
    cout << setw(5) << 5 << setw(9) << rollCount5 << setw(12) << fixed << setprecision(2) << (rollCount5 / static_cast<double>(numRolls)) * 100 << "%\n";
    cout << setw(5) << 6 << setw(9) << rollCount6 << setw(12) << fixed << setprecision(2) << (rollCount6 / static_cast<double>(numRolls)) * 100 << "%\n";
    
    // TESTING OUTPUT
    // cout << setw(6) << "Total" << setw(10) << numRolls << setw(10) << fixed << setprecision(2) << ((rollCount1 + rollCount2 + rollCount3 + rollCount4 + rollCount5 + rollCount6) / numRolls) *100 << "%\n";

    return 0;
}


