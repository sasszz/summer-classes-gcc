//
//  main.cpp
//  homework
//
//  Created by Lucie Chevreuil on 6/29/23.
//  homework #3
//

#include <iostream>
#include <bitset>

using namespace std;

int baseXtoDecimal(const string& number, int X) {
    int decimal = 0;
    int power = 1;

    for (int i = number.length() - 1; i >= 0; --i) {
        int digit;
        if (isdigit(number[i]))
            digit = number[i] - '0';
        else if (isalpha(number[i]))
            digit = toupper(number[i]) - 'A' + 10;
        else {
            cout << "Invalid number format." << endl;
            return 0;
        }

        decimal += digit * power;
        power *= X;
    }

    return decimal;
}

string decimalToBaseX(int number, int X) {
    string result = "";
    if(number == 0) {
        result = '0';
    }
    
    while (number > 0) {
        char digit = (number % X) + '0';
        result = digit + result;
        number /= X;
    }
    
    return result;
}


int main() {
    // ###########################################################################################
    // 1. Count the next 10 numbers
    // ###########################################################################################
    
    cout << endl;
    cout << "QUESTION 1a" << endl;
    // (a) in octal starting from 267
    // First, convert 267 from octal to decimal:
    int number_one_a = 183;
    const int BASE8 = 8;
    for (int i = number_one_a; i < (number_one_a + 11); i++) {
        string baseXNumber = decimalToBaseX(i, BASE8);
        cout << baseXNumber << endl;
    }
    // ANS: 267*, 270, 271, 272, 273, 274, 275, 276, 277, 300, 301
    

    cout << endl;
    cout << "QUESTION 1b" << endl;
    // (b) in base 3 starting from 2102
    // First, convert 2102 from base 3 to decimal:
    int number_one_b = 65;
    const int BASE3 = 3;
    for (int i = number_one_b; i < (number_one_b + 11); i++) {
        string baseXNumber = decimalToBaseX(i, BASE3);
        cout << baseXNumber << endl;
    }
    // ANS: 2102*, 2110, 2111, 2112, 2120, 2121, 2122, 2200, 2201, 2202, 2210
    
    
    cout << endl;
    cout << "QUESTION 1c" << endl;
    // (c) in binary starting from 10101
    // First, convert 10101 from binary to decimal:
    int number_one_c = 21;
    const int BASE2 = 2;
    for (int i = number_one_c; i < (number_one_c + 11); i++) {
        string baseXNumber = decimalToBaseX(i, BASE2);
        cout << baseXNumber << endl;
    }
    // ANS: 10101*, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111

    
    cout << endl;
    cout << "QUESTION 1d" << endl;
    // (d) in base 5 starting from 2433
    // First, convert 2433 from base 5 to decimal:
    int number_one_d = 368;
    const int BASE5 = 5;
    for (int i = number_one_d; i < (number_one_d + 11); i++) {
        string baseXNumber = decimalToBaseX(i, BASE5);
        cout << baseXNumber << endl;
    }
    // ANS: 2433*, 2434, 2440, 2441, 2442, 2443, 2444, 3000, 3001, 3002, 3003
    
    
    // ###########################################################################################
    // 2. Count the next 10 numbers
    // ###########################################################################################

    cout << endl;
    cout << "QUESTION 2a" << endl;
    // (a) in octal starting from 466
    // First, convert 466 from octal to decimal:
    int number_two_a = 310;
    for (int i = number_two_a; i < (number_two_a + 11); i++) {
        string baseXNumber = decimalToBaseX(i, BASE8);
        cout << baseXNumber << endl;
    }
    // ANS: 466*, 467, 470, 471, 472, 473, 474, 475, 476, 477, 500
    

    cout << endl;
    cout << "QUESTION 2b" << endl;
    // (b) in base 3 starting from 1201
    // First, convert 1201 from base 3 to decimal:
    int number_two_b = 46;
    for (int i = number_two_b; i < (number_two_b + 11); i++) {
        string baseXNumber = decimalToBaseX(i, BASE3);
        cout << baseXNumber << endl;
    }
    // ANS: 1201*, 1202, 1210, 1211, 1212, 1220, 1221, 1222, 2000, 2001, 2002

    
    cout << endl;
    cout << "QUESTION 2c" << endl;
    // (c) in binary starting from 11011
    // First, convert 11011 from binary to decimal:
    int number_two_c = 27;
    for (int i = number_two_c; i < (number_two_c + 11); i++) {
        string baseXNumber = decimalToBaseX(i, BASE2);
        cout << baseXNumber << endl;
    }
    // ANS: 11011*, 11100, 11101, 11110, 11111, 100000, 100001, 100010, 100011, 100100, 100101

    
    cout << endl;
    cout << "QUESTION 2d" << endl;
    // (d) in base 5 starting from 3434
    // First, convert 3434 from base 5 to decimal:
    int number_two_d = 494;
    for (int i = number_two_d; i < (number_two_d + 11); i++) {
        string baseXNumber = decimalToBaseX(i, BASE5);
        cout << baseXNumber << endl;
    }
    // ANS: 3434*, 3440, 3441, 3442, 3443, 3444, 4000, 4001, 4002, 4003, 4004

    
    // ###########################################################################################
    // 3. Convert the following numbers from binary to decimal, assuming unsigned binary representation:
    // ###########################################################################################
    
    cout << endl;
    cout << "QUESTION 3" << endl;
    string question_three_numbers[] = {"10010", "110", "1011", "1000", "11111", "1010101"};
    for (const auto& number : question_three_numbers) {
        int decimal = baseXtoDecimal(number, 2);
        cout << decimal << endl;
    }
    // ANS: 18, 6, 11, 8, 31, 85

     
    // ###########################################################################################
    // 4. Convert the following numbers from binary to decimal, assuming unsigned binary representation:
    // ###########################################################################################

    cout << endl;
    cout << "QUESTION 4" << endl;
    string question_four_numbers[] = {"10110", "10", "10101", "10000", "1111", "11110000"};
    for (const auto& number : question_four_numbers) {
        int decimal = baseXtoDecimal(number, 2);
        cout << decimal << endl;
    }
    // ANS: 22, 2, 21, 16, 15, 240

    
    // ###########################################################################################
    // 5. Convert the following numbers from decimal to binary, assuming unsigned binary representation:
    // ###########################################################################################
    
    cout << endl;
    cout << "QUESTION 5" << endl;
    int question_five_numbers[] = {25, 16, 1, 14, 5, 41};
    int question_five_size = sizeof(question_five_numbers) / sizeof(question_five_numbers[0]);
    for (int i = 0; i < question_five_size; i++) {
        string baseXNumber = decimalToBaseX(question_five_numbers[i], BASE2);
        cout << baseXNumber << endl;
    }
    // ANS: 11001, 10000, 1, 1110, 101, 101001
     
    
    // ###########################################################################################
    // 6. Convert the following numbers from decimal to binary, assuming unsigned binary representation:
    // ###########################################################################################
    
    cout << endl;
    cout << "QUESTION 6" << endl;
    int question_six_numbers[] = {12, 35, 3, 0, 27, 16};
    int question_six_size = sizeof(question_six_numbers) / sizeof(question_six_numbers[0]);
    for (int i = 0; i < question_six_size; i++) {
        string baseXNumber = decimalToBaseX(question_six_numbers[i], BASE2);
        cout << baseXNumber << endl;
    }
    // ANS: 1100, 100011, 11, 0, 11011, 10000

    
    // ###########################################################################################
    // 7. With unsigned binary representation, what is the range of numbers as written in binary and in decimal for the following cells?
    // ###########################################################################################

    // (a) a two-bit cell
    // In binary: 00 to 11
    // In decimal: 0 to 3

    // (b) a three-bit cell
    // In binary: 000 to 111
    // In decimal: 0 to 7
    
    // (c) a four-bit cell
    // In binary: 0000 to 1111
    // In decimal: 0 to 15

    // (d) a five-bit cell
    // In binary: 00000 to 11111
    // In decimal: 0 to 31

    // (e) an n-bit cell in general
    // In binary: 0 to (2^n - 1)
    // In decimal: 0 to (2^n - 1)
    
    return 0;
}
