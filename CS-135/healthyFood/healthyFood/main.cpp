//
//  main.cpp
//  healthyFood
//
//  Created by Lucie Chevreuil on 7/6/23
//  Midterm - Healthy Food, CS135
//
// PSEUDOCODE
// Declare variables:
// char userSelection
// bool userContinues and initialize to true
// double subTotal, salesTax, total and initialize to 0
//
// DO WHILE LOOP
// Repeat while userContinues is true:
// Output displayMenu()
// Input userSelection
//
// Switch userSelection:
// Case 'a':
// Add FRIES_PRICE to subTotal
// Output "Order fries"
// Break
//
// Case 'b':
// Add BURGER_PRICE to subTotal
// Output "Order burger"
// Break
//
// Case 'c':
// Add SALAD_PRICE to subTotal
// Output "Order salad"
// Break
//
// Case 'd':
// Calculate salesTax as calcTax(subTotal)
// Calculate total as subTotal + salesTax
// Output "Subtotal = $" followed by subTotal with 2 decimal places
// Output "Sales Tax = $" followed by salesTax with 2 decimal places
// Output "Total = $" followed by total with 2 decimal places
// Break
//
// Case 'q':
// Set userContinues to false
// Output "Come again!"
// Break
//
// Default:
// Output "Invalid selection. Please try again."
// Prevent Infinite Loop
//
// Return 0


#include "receipt.h"
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    // DECLARE VARIABLES
    char userSelection;
    bool userContinues = true;
    double subTotal = 0, salesTax = 0, total = 0;
    
    do {
        displayMenu();
        cin >> userSelection;
        
        switch (userSelection) {
            case 'a':
                subTotal += FRIES_PRICE;
                cout << "Order fries" << endl;
                cout << endl;
                break;
            case 'b':
                subTotal += BURGER_PRICE;
                cout << "Order burger" << endl;
                cout << endl;
                break;
            case 'c':
                subTotal += SALAD_PRICE;
                cout << "Order salad" << endl;
                cout << endl;
                break;
            case 'd':
                // CALCULATIONS
                salesTax = calcTax(subTotal);
                total = subTotal + salesTax;
                cout << fixed << setprecision(2) << "Subtotal = $" << subTotal << endl;
                cout << "Sales Tax = $" << salesTax << endl;
                cout << "Total = $" << total << endl;
                total = 0; subTotal = 0; salesTax = 0; // RESET TO 0 AFTER PAYING
                cout << endl;
                break;
            case 'q':
                userContinues = false;
                cout << "Come again!" << endl;
                break;
            default:
                // INPUT VALIDATION
                cout << "Invalid selection. Please try again." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                cout << endl;
                break;
        }
    } while (userContinues);
    
    return 0;

}
