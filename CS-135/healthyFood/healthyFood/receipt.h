//
//  receipt.h
//  healthyFood
//
//  Created by Lucie Chevreuil on 7/6/23
//  Midterm - Healthy Food, CS135
//

#ifndef receipt_h
#define receipt_h

#include <iostream>

// PSEUDOCODE
// NOTE: header file to contain constants and function prototypes
// Use two different functions: menu to display the menu and calcTax to take a double, multiply by 0.08 and return the value.

// Global Constants Needed: ####################################
// 1) double const SALES_TAX
const double SALES_TAX_RATE = 0.08;

// 2) double const FRIES_PRICE
const double FRIES_PRICE = 2.39;

// 3) double const BURGER_PRICE
const double BURGER_PRICE = 3.29;

// 3) double const SALAD_PRICE
const double SALAD_PRICE = 1.99;

// Function Prototypes Needed: ####################################

// 1) void function displayMenu
// fx input n/a
// fx output n/a
void displayMenu();

// 2) value returning function calcTax
// fx input double subTotal
// fx output double calculatedSalesTax
double calcTax(double subTotal);


// Test if header file is properly imported
//void printHelloWorld() {
//    std::cout << "Hello, World!" << std::endl;
//}

#endif /* play_h */
