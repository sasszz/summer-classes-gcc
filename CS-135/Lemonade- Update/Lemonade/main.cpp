//
//  main.cpp
//  Lemonade
//
//  Created by Lucie Chevreuil on 7/20/23.
//  CS-135, Lemonade Final Code Project

#include "Lemonade.h"
#include <iostream>
#include <limits>

using namespace std;

int main() {
    bool playerContinues = true;
    int choice;
    bool hasCookie;
    string flavor;
    double price = 0;


    do {
        cout << "Two flavor Lemonade Stand" << endl;
        cout << "1) Regular Lemonade" << endl;
        cout << "2) Strawberry Lemonade" << endl;
        cout << "0) Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        // Check for invalid input
        // Although this does not exactly match the request on the exam, I believe this is a better solution
        while (cin.fail() || (choice < 0 || choice > 2)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice. Please enter a valid option: ";
            cin >> choice;
        }

        switch (choice) {
            case 0:
                cout << "Quitting" << endl;
                playerContinues = false;
                return 0;
            case 1:
                flavor = "Regular Lemonade";
                price = 1.95;
                break;
            case 2:
                flavor = "Strawberry Lemonade";
                price = 2.49;
                break;
        }

        char cookieChoice;
        cout << "Want the optional cookie? (y for yes) ";
        cin >> cookieChoice;
        cout << endl;

        hasCookie = (cookieChoice == 'y' || cookieChoice == 'Y');

        Lemonade order(flavor, price, hasCookie);
        order.printReceipt();
        cout << endl;

        // Clear the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
    } while(playerContinues);

    return 0;
}
