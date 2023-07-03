//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 6/21/23.
//  CS-135, Lab 1
//

// OUTLINE
// Gather base input from user
// set var
// Gather height input from user
// set var
// Perform calculations
// Area = base ^2
// Volume = (Area * Height) /3
// Present calcs to user

// PSEUDOCODE
// output "What is the length of one side of the base of the pyramid: "
// input base
// output "What is the height of the pyramid: "
// input height
// output newline
// baseArea = base * base
// volume = (baseArea * height) / 3
// output "The area of the base of the pyramid is: " + baseArea
// output "The volume of the pyramid is: " + volume
// return 0


#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

// RENAME FX TO MAIN FOR IT TO RUN
int lab1part3() {
    cout << "What is the length of one side of the base of the pyramid: ";
    double base;
    cin >> base;
    cout << "What is the height of the pyramid: ";
    double height;
    cin >> height;
    cout << endl;
    double baseArea = base * base;
    double volume = (baseArea * height) / 3;

    cout << "The area of the base of the pyramid is: " << baseArea << endl;
    cout << "The volume of the pyramid is: " << setprecision(4) << volume << endl;

    
    return 0;
}
