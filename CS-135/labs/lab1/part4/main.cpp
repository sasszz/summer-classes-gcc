//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 6/21/23.
//  CS-135, Lab 1
//

// OUTLINE
// set fruit costs
// collect user inputs and set variables
// perform calculations for indvdl fruit cost and then total cost
// organize invoice output
// present each row for each fruit
// format final cost

// PSEUDOCODE
// APPLE_COST = 0.65
// ORANGE_COST = 0.90
// BANANA_COST = 0.70
// output "How many apples? "
// input apples
// output "How many oranges? "
// input oranges
// output "How many bananas? "
// input bananas
// output newline
// totalAppleCost = apples * APPLE_COST
// totalOrangeCost = oranges * ORANGE_COST
// totalBananaCost = bananas * BANANA_COST
// totalCost = totalAppleCost + totalOrangeCost + totalBananaCost
// output "BOB'S FRUITS GROCERY INVOICE"
// output "-----------------------------------"
// output apples + " Apples "
// output " @ " + APPLE_COST + " each"
// output " = $ " + totalAppleCost
// output oranges + " Oranges "
// output " @ " + ORANGE_COST + " each"
// output " = $ " + totalOrangeCost
// output bananas + " Bananas "
// output " @ " + BANANA_COST + " each"
// output " = $ " + totalBananaCost
// output "-------"
// output "TOTAL = $ " + totalCost
// return 0


#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

// RENAME FX TO MAIN FOR IT TO RUN
int lab1part4() {
    const double APPLE_COST = 0.65;
    const double ORANGE_COST = 0.90;
    const double BANANA_COST = 0.70;
    cout << "How many apples? ";
    int apples;
    cin >> apples;
    cout << "How many oranges? ";
    int oranges;
    cin >> oranges;
    cout << "How many bananas? ";
    int bananas;
    cin >> bananas;
    cout << endl;
    double totalAppleCost = apples * APPLE_COST;
    double totalOrangeCost = oranges * ORANGE_COST;
    double totalBananaCost = bananas * BANANA_COST;
    double totalCost = totalAppleCost + totalOrangeCost + totalBananaCost;

    cout << "BOB'S FRUITS GROCERY INVOICE" << endl;
    cout << "-----------------------------------" << endl;
    cout << right << setw(2) << apples << " Apples ";
    cout << right << "  @ " << fixed << setprecision(2) << APPLE_COST << " each";
    cout << right << setw(5) << "   = $  " << totalAppleCost << endl;
    cout << right << setw(2) << oranges << " Oranges ";
    cout << right << " @ " << fixed << setprecision(2) << ORANGE_COST << " each";
    cout << right << setw(5) << "   = $  " << totalOrangeCost << endl;
    cout << right << setw(2) << bananas << " Bananas ";
    cout << right << " @ " << fixed << setprecision(2) << BANANA_COST << " each";
    cout << right << setw(5) << "   = $ " << totalBananaCost << endl;
    cout << right << setw(35) << "-------" << endl;
    cout << right << setw(30) <<"TOTAL = $ " << fixed << setprecision(2) << totalCost << endl;


//    BOB'S FRUITS GROCERY INVOICE\n
//    -----------------------------------
//     6 Apples   @ 0.65 each   = $  3.90
//    11 Oranges  @ 0.90 each   = $  9.90
//    24 Bananas  @ 0.70 each   = $ 16.80
//                                -------
//                        TOTAL = $ 30.60
    return 0;
}
