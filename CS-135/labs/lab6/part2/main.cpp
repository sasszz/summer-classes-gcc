//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Lab 6, Part 2 CS-135

// PSEUDOCODE

#include "seats.h"
#include <iostream>
#include <iomanip>

using namespace std;

// TEST DATA
double prices[MAX_ROW] = {40.00, 40.00, 35.00, 35.00, 35.00, 30.00, 30.00, 25.00, 25.00, 25.00, 12.50, 12.50, 12.50, 9.50, 9.50};

int main () {
    // DECLARE VARIABLES
    char seatingChart[MAX_ROW][MAX_COL];
    int selectedRow, selectedSeat, userSelection, totalSeatsSold = 0, presetSeatsSold = 0;
    double totalRevenue  = 0, presetRevenue = 0;
    bool playerContinues = true;
    bool purchaseAnotherTicket = true;
    
    for (int row = 0; row < MAX_ROW; row++) {
        for (int seat = 0; seat < MAX_COL; seat++) {
            seatingChart[row][seat] = '*';
        }
    }
    
    // Preset ticket purchases
//    int presetSeats[][2] = {
//        {0, 8}, {0, 9}, {0, 10}, {0, 18}, {0, 19},
//        {2, 5}, {2, 6},
//        {5, 0}, {5, 1}, {5, 2},
//        {7, 7}, {7, 8},
//        {9, 1}, {9, 9}, {9, 10},
//        {11, 11},
//        {12, 13}, {12, 14}, {12, 15},
//        {14, 4}, {14, 5}, {14, 6}, {14, 7},
//        {1, 0}
//    };
    int presetSeats[][2] = {};

    int numPresetSeats = sizeof(presetSeats) / sizeof(presetSeats[0]);

    // Set preset seats as taken
    for (int i = 0; i < numPresetSeats; i++) {
        int row = presetSeats[i][0];
        int seat = presetSeats[i][1];
        seatingChart[row][seat] = '#';
        if (seatingChart[row][seat] == '#') {
            presetSeatsSold++;
            presetRevenue += prices[row];
        }
    }
    
    do {
        cout << endl;
        cout << "1. Buy Ticket" << endl;
        cout << "2. Display seating and sales" << endl;
        cout << "0. Quit" << endl;
        cout << endl;
        cout << "Selection: ";
        cin >> userSelection;
        
        switch (userSelection) {
            case 0:
                return 0;
            case 1:
                do {
                    cout << "Seat desired (row, column): ";
                    cin >> selectedRow >> selectedSeat;

                    if (selectedRow < 0 || selectedRow >= MAX_ROW || selectedSeat < 0 || selectedSeat >= MAX_COL) {
                        cout << "Out of range" << endl;
                    }
                    else if (seatingChart[selectedRow][selectedSeat] == '#') {
                        cout << "Seat already taken" << endl;
                    }
                    else {
                        seatingChart[selectedRow][selectedSeat] = '#';
                        totalSeatsSold++;
                        totalRevenue += prices[selectedRow];
                        cout << "Charge $" << fixed;
                        if (prices[selectedRow] < 10.0) {
                            cout << " ";
                        }
                        cout << setprecision(2) << prices[selectedRow] << endl;
                    }
                    cout << "Buy another ticket (y = yes)? ";
                    char choice;
                    cin >> choice;

                    if (choice != 'y') {
                        purchaseAnotherTicket = false;
                    }
                    else {
                        purchaseAnotherTicket = true;
                    }
                } while (purchaseAnotherTicket);
                break;
            
            case 2:
                displaySeats(seatingChart);
                cout << "TOTAL TICKETS SOLD: " << (totalSeatsSold + presetSeatsSold) << endl;
                cout << "TOTAL REVENUE:  $ " << setprecision(2) << fixed << (totalRevenue + presetRevenue) << endl;
                break;
                
            default:
                cout << "Invalid selection" << endl;
                break;
        }
    } while (playerContinues);

    return 0;
}
