//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/19/23.
//  Lab 8 Part 1

#include "arrays.h"
#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std;

int lab8part2() {
//    int arr[] = {2, 9, 12, 12, 16, 19, 20, 23, 37, 53, 73, 111};
    string filename;
    int count = 0;
    int num;
    
    cout << "Please enter filename: ";
    cin >> filename;

    ifstream inputFile(filename);
    
    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    while (inputFile >> num) {
        count++;
    }
    
    inputFile.close();

    int* arr = new int[count];

    inputFile.open(filename.c_str());
    for (int i = 0; i < count; i++) {
        inputFile >> arr[i];
    }
    inputFile.close();

    bubbleSort(arr, count);

    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    float average = calculateAverage(arr, count);
    cout << "Average is " << average << endl;

    delete[] arr;

    return 0;
}
