//
//  circle.h
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Lab 7 Part 1

#ifndef circle_hpp
#define circle_hpp
#include <string>

#include <stdio.h>

// PSEUDOCODE

// GLOBAL CONSTANTS
const double PI = 3.14159;

// CIRCLE CLASS
class Circle {
private:
    std::string name;
    double radius;

public:
    Circle(double radius, const std::string& name); // First Constructor with parameters
    Circle(); // Second Constructor without parameters

    void setName(const std::string& name);
    std::string getName() const;

    void setRadius(double radius);
    double getRadius() const;
};

// 1) void function print
// fx input class instance
// fx output n/a
void print(const Circle& circle);

// 2) value returning function calculateArea
// fx input double radius
// fx output double area
double calculateArea(double radius);

// 3) value returning function removeTrailingZeros
// fx input double number
// fx output double number
double removeTrailingZeros(double number);


#endif /* circle_hpp */
