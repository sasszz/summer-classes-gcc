//
//  rainfall.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Lab 7 Part 3

#include "Stats.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    Stats rainfall;
    
    cout << fixed << setprecision(1);

    // Prompt the user to enter rainfall for each month
    for (int i = 1; i <= 12; i++) {
        double value;
        cout << "Please enter rainfall for month " << i << ": ";
        cin >> value;
        rainfall.setValue(i, value);
        cout << endl;
    }

    cout << "Annual rainfall report" << endl;

    // Print individual month rainfall values
    for (int i = 1; i <= 12; i++) {
        cout << "Month " << setw(2) << i << " rainfall is " << setw(5) << rainfall.getValue(i) << endl;
    }

    // Calculate and print total rainfall
    double total = rainfall.getTotal();
    cout << "Total rainfall for the year is " << total << endl;

    // Calculate and print average rainfall
    double average = rainfall.getAvg();
    cout << "Average rainfall was " << average << endl;

    // Get and print the lowest rainfall
    double lowest = rainfall.getSmallest();
    cout << "Lowest rainfall was " << lowest << endl;

    // Get and print the highest rainfall
    double highest = rainfall.getLargest();
    cout << "Highest rainfall was " << highest << endl;

    return 0;
}
