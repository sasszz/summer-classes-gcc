//
//  arrays.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/19/23.
//  Lab 8 Part 1

#include "arrays.h"
#include <iostream>
#include <fstream>

using namespace std;

void bubbleSort(int ary[], int size) {
    int pass = 1;
    bool swapped;

    do {
        swapped = false;
        for (int i = 0; i < size - pass; i++) {
            if (ary[i] > ary[i + 1]) {
                int temp = ary[i];
                ary[i] = ary[i + 1];
                ary[i + 1] = temp;
                swapped = true;
            }
        }
        pass++;
    } while (swapped);
}

float calculateAverage(int arr[], int size) {
    if (size == 0) {
        return 0.0f; // Return 0 for an empty array to avoid division by zero
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return static_cast<float>(sum) / size;
}
