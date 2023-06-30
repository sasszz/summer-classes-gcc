//
//  main.cpp
//  homework
//
//  Created by Lucie Chevreuil on 6/28/23.
//
#include <stdio.h>

int rectangleArea(int length, int width) {
    int area = length * width;
    return area;
}

// change to main for it to run
int part3() {
    
    /* 3) Write a C function int rectArea (int len, int wid) that returns the area of a rectangle with length len and width wid. Test it with a main program that inputs the length and width of a rectangle and outputs its area. Output the value in the main program, not in the function. You need to submit code and output.

    Sample Input
    6 10

    Sample Output
    The area of a 6 by 10 rectangle is 60. */

    int length, width;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    int area = rectangleArea(length, width);

    printf("The area of the rectangle is: %d\n", area);

    return 0;
}
