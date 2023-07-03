//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 6/28/23.
//
//  CS-135, Lab 3 part 2

// PSEUDOCODE
// Variable Declaration
// char userSelection

// Begin Program
// Do/While Loop
// Endl
// Output MENU endl
// Output a) Generate Multiplication Table endl
// Output q) Quit Program endl
// Output Please make a selection:
// Input char userSelection
// Endl

// Switch Statement Case 'a'
// declare int tableSize
// Output Enter size of multiplication table:
// Input int tableSize
// Endl
// ##! Input Validation on tableSize, must be 1-10
// Output Size range must be 1 to 10 endl
// REPEAT UNTIL VALID
// Output Enter size of multiplication table:
// Input int tableSize
//
// Endl
// Output MULTIPLICATION TABLE: tableSize endl
// Endl
// Output "x" with a width of tableSize
// For i from 1 to tableSize:
//    Output i with a width of tableSize
// Output endl
//
// For i from 1 to tableSize:
//    Output i with a width of tableSize
//    For j from 1 to tableSize:
//        Output the product of i and j with a width of tableSize
//    Output endl
// Endl
// Restart Program *****

// Switch Statement Case 'q'
// Output Quitting
// break

// Switch Statement Case Default
// ##! Input Validation on userSelection, must be 'a' or 'q'
// Output Invalid Selection
// Restart Program *****

#include <iostream>
#include <iomanip>

using namespace std;

// RENAME FX TO MAIN FOR IT TO RUN
int lab3part2() {
    char userSelection;

    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "a) Generate Multiplication Table" << endl;
        cout << "q) Quit Program" << endl;
        cout << "Please make a selection: ";
        cin >> userSelection;

        switch (userSelection) {
            case 'a':
                int tableSize;

                cout << "Enter size of multiplication table: ";
                cin >> tableSize;

                // INPUT VALIDATION
                do {
                    if (tableSize > 10 || tableSize == 0) {
                        cout << "Size range must be 1 to 10" << endl;
                        cin.clear();  // Prevent infinite loop and computer crash
                        cout << "Enter size of multiplication table: ";
                        cin >> tableSize;
                    }
                } while (tableSize > 10);

                cout << endl;
                cout << "MULTIPLICATION TABLE: " << tableSize << "'s" << endl;
                cout << endl;

                // PRINT TABLE
                // headers
                cout << setw(4) << " ";
                for (int i = 1; i <= tableSize; i++) {
                    cout << setw(4) << i;
                }
                cout << endl;

                // body
                for (int i = 1; i <= tableSize; i++) {
                    cout << setw(4) << i;
                    for (int j = 1; j <= tableSize; j++) {
                        cout << setw(4) << i * j;
                    }
                    cout << endl;
                }

                break;

            case 'q':
                cout << "Quitting" << endl;
                break;

            default:
                cout << "Invalid Selection" << endl;
                break;
        }

    } while (userSelection != 'q');

    return 0;
}
