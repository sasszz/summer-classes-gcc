//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/3/23.
//
//  CS-135, Lab 4 part 2

// PSEUDOCODE
// not required

#include <iostream>
#include <fstream>

using namespace std;

int lab4part2() {
    // Create values.txt File
//    ofstream outputFile("values.txt");
//    if (!outputFile) {
//        cout << "Error creating file." << endl;
//        return 1;
//    }
//
//    int numbers[] = {7, 88, 23, 22, 21, 10, 44, 50, 6, 99};
//    int numCount = sizeof(numbers) / sizeof(numbers[0]);
//
//    for (int i = 0; i < numCount; i++) {
//        outputFile << numbers[i] << endl;
//    }
//
//    outputFile.close();
    
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    int number;
    int oddCount = 0;
    int evenCount = 0;

    while (inputFile >> number) {
        cout << number << endl;
        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    inputFile.close();

    cout << "Number of odd values is " << oddCount << endl;
    cout << "Number of even values is " << evenCount << endl;
    
    return 0;
}
