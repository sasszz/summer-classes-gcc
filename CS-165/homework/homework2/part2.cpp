//
//  main.cpp
//  homework
//
//  Created by Lucie Chevreuil on 6/28/23.
//

#include <stdio.h>

// change to main for it to run
int part2() {
    /* 2) Write a C program that inputs an integer and outputs whether the integer is even. You need to submit code and output.

    Sample Input
    15

    Sample Output
    15 is not even. */
    
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}
