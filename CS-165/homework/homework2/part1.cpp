//
//  main.cpp
//  homework
//
//  Created by Lucie Chevreuil on 6/28/23.
//

#include <stdio.h>

// change to main for it to run
int part1() {
    /* 1) Write a C program that inputs two integers and outputs their quotient and remainder. To output the % character, you must write it as %% in the format string. You need to submit code and output.

    Sample Input
    13 4

    Sample Output
    13/4 has value 3.
    13%4 has value 1. */
    
    int dividend, divisor, quotient, remainder;

    printf("Enter the number you would like to be divided: ");
    scanf("%d", &dividend);

    printf("Enter the first number divided by: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    
    return 0;
}
