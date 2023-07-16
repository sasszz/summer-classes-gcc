//
//  lotto.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/13/23.
//  Lab 6 Part 1, CS-135
//
// PSEUDOCODE
//
// 1) void function displayMenu
// fx input n/a
// fx output n/a
//void displayMenu();
// LOGIC:
// OUTPUT
// cout << "LITTLETON CITY LOTTO MODEL:" << endl;
// cout << "---------------------------" << endl;
// cout << "1) Play Lotto" << endl;
// cout << "0) Quit Program" << endl;
// cout << "Please make a selection: ";

// 2) void function getLottoPicks
// fx input array
// fx output n/a
// void getLottoPicks(int []);
// LOGIC:
// declare function getLottoPicks(nums[])
//    string playerName <- "Lucie"
//
//    for i <- 0 to LOTTO_PICK_ARRAY_SIZE - 1 do
//        number <- uninitialized
//        validInput <- false
//
//        do
//            display "Enter pick #" + (i + 1) + ": "
//            read number
//
//            if number < 1 or number > 40 then
//                display "Invalid entry"
//                validInput <- false
//            else if noDuplicates(nums, number) then
//                display "Duplicate entry!"
//                validInput <- false
//            else
//                validInput <- true
//            end if
//
//        while not validInput
//
//        nums[i] <- number
//
//    end for
// end function

// 3) void function genWinNums
// fx input array
// fx output n/a
// void genWinNums (int[]);
// PROVIDED BY NOTES

// 3) void function noDuplicates, noInvalidPicks
// fx input array
// fx output bool
// bool noDuplicates (int[], int);
// LOGIC:
// declare function noDuplicates(nums[], num)
//    for i <- 0 to LOTTO_PICK_ARRAY_SIZE - 1 do
//        if nums[i] is equal to num then
//            return true
//        end if
//    end for
//
//    return false
// end function

// 4) void function zero
// fx input array
// fx output n/a
// void zero(int[]);
// DIDN'T DO

// 5) value returning function countMatches
// fx input array1, array2
// fx output int
// int countMatches(int[], int[]);
// LOGIC:
// declare function countMatches(array1[], array2[])
//    matchCount <- 0
//
//    for i <- 0 to LOTTO_PICK_ARRAY_SIZE - 1 do
//        for j <- 0 to LOTTO_PICK_ARRAY_SIZE - 1 do
//            if array1[i] is equal to array2[j] then
//                matchCount <- matchCount + 1
//                break // Once a match is found, exit the inner loop
//            end if
//        end for
//    end for
//
//    return matchCount
// end function

// 6) value returning function convertToString
// fx input array
// fx output string
// std::string convertToString(int[]);
// LOGIC:
// declare function convertToString(nums[])
//    result <- empty string
//
//    for i <- 0 to LOTTO_PICK_ARRAY_SIZE - 1 do
//        if nums[i] is less than 10 then
//            result <- result + "0"
//        end if
//
//        result <- result + convert nums[i] to string
//
//        if i is not equal to LOTTO_PICK_ARRAY_SIZE - 1 then
//            result <- result + " "
//        end if
//    end for
//
//    return result
// end function

#include "lotto.h"
#include <iostream>
#include <vector>



using namespace std;

// ###########################################################################################
// FUNCTION 1
// ###########################################################################################
void displayMenu() {
    cout << "LITTLETON CITY LOTTO MODEL:" << endl;
    cout << "---------------------------" << endl;
    cout << "1) Play Lotto" << endl;
    cout << "0) Quit Program" << endl;
    cout << "Please make a selection: ";
}

// ###########################################################################################
// FUNCTION 2
// ###########################################################################################
void getLottoPicks(int nums[]) {
    string playerName = "Lucie";
    for (int i = 0; i < LOTTO_PICK_ARRAY_SIZE; i++) {
        int number;
        bool validInput = false;
        do {
            cout << "Enter pick #" << i + 1 << ": ";
            cin >> number;
            
            // Check if the number is within the valid range
            if (number < 1 || number > 40) {
                cout << "Invalid entry" << endl;
                validInput = false;
            } else if (noDuplicates(nums, number)) {
                cout << "Duplicate entry!" << endl;
                validInput = false;
            } else {
                validInput = true;  // Set the flag to indicate a valid input
            }
        } while (!validInput);
        nums[i] = number;
    }
}

// ###########################################################################################
// FUNCTION 3
// ###########################################################################################
void genWinNums(int winningNums[]) {
    int number;

    for (int i = 0; i < LOTTO_PICK_ARRAY_SIZE; i++) {
        do {
            number = (rand() % 40) + 1; // Generate a random number between 1 and 40
        } while (!noDuplicates(winningNums, number));

        winningNums[i] = number;
    }
}

// ###########################################################################################
// FUNCTION 4
// ###########################################################################################
bool noDuplicates (int nums[], int num) {
    for(int i = 0; i < LOTTO_PICK_ARRAY_SIZE; ++i) {
        if(nums[i] == num){
            return true;
        }
    }
    return false;
}


// ###########################################################################################
// FUNCTION 5
// ###########################################################################################
int countMatches(int array1[], int array2[]) {
    int matchCount = 0;
    for (int i = 0; i < LOTTO_PICK_ARRAY_SIZE; ++i) {
        for (int j = 0; j < LOTTO_PICK_ARRAY_SIZE; ++j) {
            if (array1[i] == array2[j]) {
                ++matchCount;
                break; // Once a match is found, exit the inner loop
            }
        }
    }
    return matchCount;
}

// ###########################################################################################
// FUNCTION 6
// ###########################################################################################
string convertToString(int nums[]) {
    string result;
    for (int i = 0; i < LOTTO_PICK_ARRAY_SIZE; ++i) {
        if (nums[i] < 10) {
            result += "0";
        }
        result += to_string(nums[i]);
        if (i != LOTTO_PICK_ARRAY_SIZE - 1) {
            result += " ";
        }
    }
    return result;
}
