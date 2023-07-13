//
//  main.cpp
//  discussions
//
//  Created by Lucie Chevreuil on 7/13/23.
//

#include <stdio.h>
#include <iostream>

using namespace std;
// ##############################################################################
// 1. Explain why the use of constants for the size of the array is important
// Because the memory for an array is allocated at compile-time, and the size of the array must be known at that time.
// ##############################################################################

// ##############################################################################
// 2. What is pass by reference and how does that apply to arrays and functions?
//  Passing an array by reference allows the function to directly access and modify the original array in the calling code.
// When an entire array is passed to a function, it is not passed by value, but passed by reference. Imagine the CPU time and memory that would be necessary if a copy of a 10,000-element array were created each time it was passed to a function! Instead, only the starting memory address of the array is passed. Program 7-17 shows the function showValues in use.
// ##############################################################################


// ##############################################################################
// 3. Write a function that will take a one dimensional integer array and return the sum.

// 4. Write a program that will initialize a two dimensional double array of 2 by 3 with values from 0.5 to 99.9 (any double values in that range is fine). Pass it to a function to sum the two dimensional array (a bit different than one dimensional) and have the function return the sum for the main to print that sum.
// ##############################################################################

// Global constants
const int ARRAY_SIZE = 5;
const int COLS = 4;
const int TBL1_ROWS = 3; // Number of rows in table1

void showArray(const int [][COLS], int); // Function prototype

int calculateSum1DArray(int (&arr)[], int size) {
    int total = 0; // Initialize accumulator
    
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    
    return total;
}

int calculateSum2DArray(int (&arr)[][COLS], int rows, int cols) {
    int total = 0; // Initialize accumulator
    
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++)
            total += arr[row][col];
    }
    
    return total;
}

int main() {
    // SUM 1D ARRAY
    int myArray1D[] = {1, 2, 3, 4, 5};
    
    int total1DArray = calculateSum1DArray(myArray1D, ARRAY_SIZE);
    
    cout << "Total of 1D Array: " << total1DArray << endl;
    // Total: 15
    
    // SUM 2D ARRAY
    int myArray2D[TBL1_ROWS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8},
    {9, 10, 11, 12}};
    
    int total2DArray = calculateSum2DArray(myArray2D, TBL1_ROWS, COLS);
    cout << "Total of 2D Array: " << total2DArray << endl;
    // Total: 78
    
    return 0;
}

// ##############################################################################
// 5. What is a reference parameter? If I made a prototype of function "example" with one string reference parameter but returning a double, what would it look like? Why are arrays always "call by reference"
// In C++, a reference parameter is a way to pass arguments to a function by reference rather than by value.
// To create a prototype of a function called "example" with one string reference parameter and returning a double, you would write it as follows:

    double example(string& str);

// When you pass an array to a function, you're actually passing the address of its first element. This behavior is a result of how arrays are represented in memory. This prevents having to copy arrays each time they need to be accessed.
// ##############################################################################

