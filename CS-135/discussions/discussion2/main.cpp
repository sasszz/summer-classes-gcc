//
//  main.cpp
//  discussions
//
//  Created by Lucie Chevreuil on 6/21/23.
//
// The following questions use the Chapter 2 and 3 slides
//
/* 1. What are the specific types of data?
This question is a bit unclear but I will do my best to answer.
Built-in/primitive data types: These are basic data types provided by the language itself. Some examples include int, float, char, bool, etc.
User-defined data types: These are data types created by the programmer using classes or structures. */

/* 2. What are some of the primitive data types?
 char -> Used to hold characters or very small integer values, 1 byte
 floating point -> float, double, long double, 4-8 bytes
 bool -> true or false, 0 or 1
 integer -> positive or negative whole numbers, 2-8 bytes */
 
/* 3. What is the value of: 2*13 - 7/2
The answer is 22.5 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double ans;
    ans = 2 * 13 - 7.0 / 2;
    cout << ans << endl;
    return 0;
}

/* 4. Why does it have that value?
Order of Operations!
2 * 13 = 26
7/2 = 3.5
26 - 3.5 = 22.5 */

/* 5. What is an alternative to n = n + 1?
n++ */
