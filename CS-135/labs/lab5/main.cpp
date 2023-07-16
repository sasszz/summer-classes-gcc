//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/10/23
//
//  CS-135, Lab 5

// PSEUDOCODE
// start main
//    bool userContinues = true
//    string inputString
//    int choice
//
//    Output "Please enter your initial string: "
//    inputString = readLine()
//
//    do
//        Output "USE THIS MENU TO MANIPULATE YOUR STRING"
//        Output "----------------------------------------"
//        Output "1) Inverse String"
//        Output "2) Reverse String"
//        Output "3) To Uppercase"
//        Output "4) Count Number Words"
//        Output "5) Count Consonants"
//        Output "6) Enter a Different String"
//        Output "7) Print the String"
//        Output "0) Quit"
//        Output "Enter selection: "
//        choice = readInteger()
//        readLine()
//
//        switch (choice)
//            case 1:
//                inputString = inverse(inputString)
//                break
//            case 2:
//                inputString = reverse(inputString)
//                break
//            case 3:
//                inputString = toUpper(inputString)
//                break
//            case 4:
//                Output "The string \"" + inputString + "\" has " + countWords(inputString) + " word(s)"
//                break
//            case 5:
//                Output "Number of consonants in the string is " + countConsonants(inputString)
//                break
//            case 6:
//                Output "Enter different string: "
//                inputString = readLine()
//                break
//            case 7:
//                Output inputString
//                break
//            case 0:
//                userContinues = false
//                Output "Quitting"
//                return 0
//            default:
//                Output "Invalid selection"
//        end switch
//    while userContinues
//
//    return 0
// end function


#include "string.h"
#include <iostream>
#include <string>

using namespace std;

int lab5() {
    // DECLARE VARIABLES
    bool userContinues = true;
    string inputString;
    int choice;
    
    cout << "Please enter your initial string: ";
    getline(cin >> ws, inputString);

    do {
        // Consider converting to void menu fx
        cout << "USE THIS MENU TO MANIPULATE YOUR STRING" << endl;
        cout << "----------------------------------------" << endl;
        cout << "1) Inverse String" << endl;
        cout << "2) Reverse String" << endl;
        cout << "3) To Uppercase" << endl;
        cout << "4) Count Number Words" << endl;
        cout << "5) Count Consonants" << endl;
        cout << "6) Enter a Different String" << endl;
        cout << "7) Print the String" << endl;
        cout << "0) Quit" << endl;
        cout << "Enter selection: ";
        
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                inputString = inverse(inputString);
                break;
            case 2:
                inputString = reverse(inputString);
                break;
            case 3:
                inputString = toUpper(inputString);
                break;
            case 4:
                cout << "The string \"" << inputString << "\" has " << countWords(inputString) << " word(s)" << endl;
                break;
            case 5:
                cout << "Number of consonants in the string is " << countConsonants(inputString) << endl;
                break;
            case 6:
                cout << "Enter different string: ";
                getline(cin, inputString);
                break;
            case 7:
                cout << inputString << endl;
                break;
            case 0:
                userContinues = false;
                cout << "Quitting" << endl;
                return 0;
            default:
                cout << "Invalid selection" << endl;
        }
    } while (userContinues);

    return 0;
}

