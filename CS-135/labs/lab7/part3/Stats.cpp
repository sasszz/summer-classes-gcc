//
//  Stats.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Lab 7 Part 3

#include "Stats.h"
#include <iostream>
#include <iomanip>

using namespace std;

Stats::Stats() {
    // Initialize all values in the array to zero
    for (int i = 0; i < 12; i++) {
        rain[i] = 0.0;
    }
}

void Stats::setValue(int index, double value) {
    // Adjust index from 1 to 12 to 0 to 11
    index--;

    // Check if the index is valid
    if (index >= 0 && index < 12) {
        rain[index] = value;
    }
}

double Stats::getValue(int index) {
    // Adjust index from 1 to 12 to 0 to 11
    index--;

    // Check if the index is valid
    if (index >= 0 && index < 12) {
        return rain[index];
    }

    // Return a default value if the index is invalid
    return 0.0;
}

void Stats::printValues() {
    for (int i = 0; i < 12; i++) {
        cout << fixed << setprecision(1) << rain[i] << " ";
    }
    cout << endl;
}

double Stats::getTotal() {
    double total = 0.0;
    for (int i = 0; i < 12; i++) {
        total += rain[i];
    }
    return total;
}

double Stats::getAvg() {
    return getTotal() / 12.0;
}

double Stats::getLargest() {
    double largest = rain[0];
    for (int i = 1; i < 12; i++) {
        if (rain[i] > largest) {
            largest = rain[i];
        }
    }
    return largest;
}

double Stats::getSmallest() {
    double smallest = rain[0];
    for (int i = 1; i < 12; i++) {
        if (rain[i] < smallest) {
            smallest = rain[i];
        }
    }
    return smallest;
}
