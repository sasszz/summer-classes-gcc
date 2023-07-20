//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/19/23.
//  Lab 8 Part 2

#include "max.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2, str3;
    int num1, num2, num3;

    cout << "Enter in name #1: ";
    getline(cin, str1);

    cout << "Enter in name #2: ";
    getline(cin, str2);

    cout << "Enter in name #3: ";
    getline(cin, str3);

    cout << "Enter in 3 integers: ";
    cin >> num1 >> num2 >> num3;

    int maxInt = findMax(num1, num2, num3);
    cout << "Max integer: " << maxInt << endl;

    string maxString = findMax(str1, str2, str3);
    cout << "Highest name: " << maxString << endl;

    return 0;
}
