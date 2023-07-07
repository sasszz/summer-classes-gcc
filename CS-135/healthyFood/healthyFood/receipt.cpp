//
//  receipt.cpp
//  healthyFood
//
//  Created by Lucie Chevreuil on 7/6/23
//  Midterm - Healthy Food, CS135
//

// PSEUDOCODE
// NOTE: implementation file to contain function bodies
// Use two different functions: menu to display the menu and calcTax to take a double, multiply by 0.08 and return the value.

// 1) void function displayMenu
// fx input n/a
// fx output n/a
// -----------------------------------------------------------------------
// Output Healthy Food! endl
// Output a) Sweet Potato Fries, $2.39 endl
// Output b) Veggie Burger, $3.29 endl
// Output c) Salad, $1.99 endl
// Output d) Pay endl
// Output q) quit endl
// Output Enter selection:
// ###########################################################################################

// 2) value returning function calcTax
// fx input double subTotal
// fx output double calculatedSalesTax
// -----------------------------------------------------------------------
// Declare double calculatedSalesTax
// Set calculatedSalesTax to double subTotal multiplied by const SALES_TAX
// Return double calculatedSalesTax
// ###########################################################################################

#include "receipt.h"
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;


// ###########################################################################################
// FUNCTION 1
// ###########################################################################################
void displayMenu() {
    cout << "Healthy Food!" << endl;
    cout << "a) Sweet Potato Fries, $2.39" << endl;
    cout << "b) Veggie Burger, $3.29" << endl;
    cout << "c) Salad, $1.99" << endl;
    cout << "d) Pay" << endl;
    cout << "q) Quit" << endl;
    cout << "Enter selection: ";
}

// ###########################################################################################
// FUNCTION 2
// ###########################################################################################
double calcTax(double subTotal) {
    // Declare local variable
    double calculatedSalesTax;
    
    // Test if calcTax is being properly imported
//     cout << "calcTax Function Call" << endl;
    
    // Calculations
    calculatedSalesTax = subTotal * SALES_TAX_RATE;
    
    return calculatedSalesTax;
};
