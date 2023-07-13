//
//  main.cpp
//  discussions
//
//  Created by Lucie Chevreuil on 7/9/23.
//

#include <stdio.h>
#include <iostream>
   
using namespace std;

// 1. What is the difference between a C++ string class and a C-string?
// The main difference is that C++ string class (std::string) provides a higher-level abstraction with automatic memory management and a richer set of functions, while C-strings are character arrays with manual memory management and rely on C standard library functions.

// 2. What are commonly used string functions.
// .length(), .size(), .compare()

// 3. What is the difference between C++ string class and the Java String
// C++ string is mutable, allowing modification of its contents after creation, while Java String is immutable, preventing direct changes and creating new objects for modified versions.

// 4. What is the phantom newline problem and how do you avoid it?
// It occurs when you read a line of input and press Enter, but the newline character from that input stays in the memory. This can lead to unexpected issues when you try to read more input afterwards.
// cin.ignore();

// 5. Write a short program that will input a name, print the name, do a newline, then print a bunch of dashes under that name using a string functions (NOT a loop!). Like so:
//
// Jane Smith
//
// -------------

int disc6() {
    string name;
    int numDashes;
    
    cout << "Please enter a name: ";
    getline(cin, name); // allows for spaces
//    cin >> name;
    cout << endl;
    cout << name << endl;
    cout << endl;
    
    numDashes = name.length();
    string dashes(numDashes, '-');
    cout << dashes << endl;
    
    return 0;
}
