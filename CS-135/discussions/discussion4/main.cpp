//
//  main.cpp
//  discussions
//
//  Created by Lucie Chevreuil on 7/2/23.
//
//  Discussion #4

#include <iostream>
#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;


int disc4() {
    // ####################################################################################
    // 1. The three loops are while, for, and do/while. Give an example of each that would best fit that kind of loop.
    // ####################################################################################
    cout << "QUESTION NUMBER 1" << endl;

    // WHILE LOOP
    // The while loop repeatedly executes a block of code as long as a given condition is true.
    // Ideal for PREtesting a condition before executing code. For example, checking the temperature before making an adjustment to the temperature.
    // Ideal for input validation. For example, continue prompting the user to input a valid number if the entry does not fit the specifications.
    // Ideal for counters. For example, printing out a number for each iteration.
    cout << "WHILE LOOP" << endl;
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
        // OUTPUT: 1 2 3 4 5
    }
    cout << endl;

    // FOR LOOP
    // The for loop is typically used when you know the number of iterations beforehand.
    // Ideal for situations that clearly require an initialization, use a false condition to stop the loop, and require an update to occur at the end of each loop iteration.
    cout << "FOR LOOP" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
        // OUTPUT: 1 2 3 4 5
    }
    cout << endl;
    
    // DO WHILE LOOP
    // The do/while loop executes a block of code first and then checks the condition. It will continue executing as long as the condition is true.
    // Ideal for POSTtesting a condition before executing code. For example, checking if the user would like to continue the program after averaging some test scores.
    // Ideal for repeating a menu. For example, displaying a menu to the user repeatedly until they enter a valid option.
    cout << "DO WHILE LOOP" << endl;
    int ii = 1;
    do {
        cout << ii << " ";
        ii++;
    } while (ii <= 5);
    // OUTPUT: 1 2 3 4 5
    cout << endl;
    
    cout << endl;
    // ####################################################################################
    // 2. Write a piece of code that would make sure you have at least $35 in your pocket before you go on a hike. Then say "It was a nice hike but I lost $10"
    // ####################################################################################
    cout << "QUESTION NUMBER 2" << endl;

    int moneyInPocket = 40; // Assume you have $40 initially
    if (moneyInPocket >= 35) {
        cout << "You have enough money to go on a hike." << endl;
        moneyInPocket -= 10; // Simulate losing $10 during the hike
        cout << "It was a nice hike but you lost $10." << endl;
        cout << "My ending balance is $" << moneyInPocket << endl;
    }
    else {
        cout << "Sorry, you don't have enough money to go on a hike." << endl;
    }

    cout << endl;
    // ####################################################################################
    // 3. A bit of a challenge: write a piece of code to open a file and write 5 numbers (any numbers will do) then close the file.
    // ####################################################################################
    cout << "QUESTION NUMBER 3" << endl;

    // PRE-SETUP for XCODE:
    // NavBar -> Product -> Scheme -> Edit Scheme -> Run -> Options -> Working Directory:
    // Set to: $PROJECT_DIR/.
    
    ofstream file("numbers.txt"); // Open the file in write mode

    if (file.is_open()) {
        // Write 5 numbers to the file
        file << "1\n";
        file << "2\n";
        file << "3\n";
        file << "4\n";
        file << "5\n";

        file.close(); // Close the file
        cout << "Numbers have been written to the file." << endl;
    }
    else {
        cout << "Failed to open the file." << endl;
    }
    
    cout << endl;
    // ####################################################################################
    // 4. Write a piece of code that would generate 10 random numbers that range from 22 to 33
    // ####################################################################################
    cout << "QUESTION NUMBER 4" << endl;

    // NOTE:
    // Function for how to limit range of random number generator:
    // y = (rand() % (maxValue − minValue + 1)) + minValue;

    const int MINVALUE = 22;
    const int MAXVALUE = 33;
    for (int i = 1; i <= 10; i++) {
        cout << "Entry #" << i << ": " <<(rand() % (MAXVALUE - MINVALUE + 1)) + MINVALUE << endl;
    }
    cout << endl;

    return 0;
}
