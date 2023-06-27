//
//  discussion1.cpp
//  discussions
//
//  Created by Lucie Chevreuil on 6/21/23.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

//The following questions use the Chapter 1 slides and supplement


/* 1. Who developed C and what was C used for initially?
Dennis M. Ritchie developed C in the early 1970's and it was used initially to write operating systems for minicomputers. */

/* 2. Why was C++ developed? If you learn C++, is it easy to learn C?
C++ was developed by Bjarne Stroustrup who was searching for a language to develop large software systems. He wanted to combine the speed of programming language BCPL and the classes/features of programming language Simula. C++ and C are similar and since C++ expands upon C, it is easier to learn C++ first and then go back to C. */

/* 3. What is Machine Language? What is "interpreted" and "compiled" as far as a computer language is concerned? What is C++, interpreted or compiled?
Machine language is binary meant for the computer to understand and execute. An interpreted language means that the source code is read and translated by an interpreter, which then executes the code. A compiled language means that the target nachine directly translates the program. C++ is a compiled language. */

/* 4. Machine language had been developed first. What came next?
Assembly language came after machine language. */

/* 5. What MUST you include in your program if you are going to output?
If you want to display output of a C++ program, you must include #include <iostream> at the top of the .cpp file. */

/* 6. If you want to format your output, what must you include?
 If you want to format the output of a C++ program, you must include #include <iomanip> at the top of the .cpp file. */

// 7. Show an output statement in C++ that would have a value of 2.452 and print it as: $2.45
using namespace std;

// CHANGE TO MAIN FOR IT TO RUN
int disc1() {
//    double value = 2.452;
//    cout << fixed << setprecision(2) << "$" << value << endl;
//    return 0;
    double number = 2.452;

    cout << setprecision(2) << fixed;
    cout << "$" << setw(2) << number << endl;
    return 0;
}

/* 8. What is pseudocode?
Pseudo code is writing out a plan for how a program should execute. It helps develop an outline of the solution and put your thoughts down on paper. */
