//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 6/22/23.
//  CS-135, Lab 1
//
// OUTLINE
// Please enter a character: QENTER
// The ASCII code for the character Q is 81\n

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

// RENAME FX TO MAIN FOR IT TO RUN
int part5() {
    cout << "Please enter a character: ";
    char character;
    cin >> character;
    
    // converts character to int using casting, pg 103 of textbook
    int asciiCode = static_cast<int>(character);
    
    cout << "The ASCII code for the character " << character << " is " << asciiCode << endl;
    return 0;
}
