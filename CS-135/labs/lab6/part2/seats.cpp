//
//  seats.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//

#include "seats.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void displaySeats(char chart[][MAX_COL]) {
//    cout << "Seats:  ";
//    for (int seat = 0; seat < MAX_COL; ++seat) {
//        cout << setw(3) << seat << "  ";
//    }
//    cout << endl;
//
//    for (int row = 0; row < MAX_ROW; ++row) {
//        cout << "Row " << setw(2) << row << "   ";
//        for (int seat = 0; seat < MAX_COL; ++seat) {
//            cout << setw(2) << chart[row][seat] << "   ";
//        }
//        cout << endl;
//    }
    cout << "Seats: ";
    for (int seat = 0; seat < MAX_COL; ++seat) {
        cout << setw(3) << seat;
    }
    cout << endl;

    for (int row = 0; row < MAX_ROW; ++row) {
        cout << "Row " << setw(2) << row << " ";
        for (int seat = 0; seat < MAX_COL; ++seat) {
            cout << setw(3) << chart[row][seat];
        }
        cout << endl;
    }
}

