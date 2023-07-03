//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 6/21/23.
//  CS-135, Lab 1

// 3.0 * 5.0
// 7.1 * 8.3 - 2.2
// 3.2 / (6.1 * 5).

#include <iostream>
#include <iomanip>

using namespace std;

// RENAME FX TO MAIN FOR IT TO RUN
int lab1part1() {
    
    double num1 = 3.0, num2 = 5.0;
    double result1 = num1 * num2;
    
    double num3 = 7.1, num4 = 8.3, num5 = 2.2;
    double result2 = (num3 * num4) - num5;
    
    double num6 = 3.2, num7 = 6.1;
    int num8 = 5;
    double result3 = num6 / (num7 * num8);
    
    cout << right << setw(6) << fixed << setprecision(1) << num1 << endl;
    cout << right << "*  " << setw(3) << fixed << setprecision(1) << num2 << endl;
    cout << right << "------" << endl;
    cout << right << setw(6) << fixed << setprecision(2) << result1 << endl;
    cout << endl;
    
    cout << right << setw(6) << fixed << setprecision(1) << num3 << endl;
    cout << right << "*  " << setw(3) << fixed << setprecision(1) << num4 << endl;
    cout << right << "-  " << setw(3) << fixed << setprecision(1) << num5 << endl;
    cout << right << "------" << endl;
    cout << right << setw(6) << fixed << setprecision(2) << result2 << endl;
    cout << endl;
    
    cout << right << setw(6) << fixed << setprecision(1) << num6 << endl;
    cout << right << "/ (" << setw(3) << fixed << setprecision(1) << num7 << endl;
    cout << right << "* " << setw(3) << num8 << ")" << endl;
    cout << right << "------" << endl;
    cout << setw(6) << fixed << setprecision(2) << result3 << endl;
    return 0;
    
//    3.0
// *  5.0
// ------
//  15.00
//
//
//    7.1
// *  8.3
// -  2.2
// ------
//  56.73
//
//
//    3.2
// / (6.1
// *    5)
// ------
//   0.10

}
