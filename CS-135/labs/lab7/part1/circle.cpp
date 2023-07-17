//
//  circle.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Lab 7 Part 1

#include "circle.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;

Circle::Circle(double radius, const string& name)
    : name(name), radius(radius) {
    if (radius < 0) {
        cout << "Invalid radius. Setting it to 0." << endl;
        this->radius = 0;
    }
}

Circle::Circle()
    : Circle(0, "") {}

void Circle::setName(const string& name) {
    this->name = name;
}

string Circle::getName() const {
    return name;
}

void Circle::setRadius(double radius) {
    if (radius < 0) {
        cout << "Invalid radius. Setting it to 0." << endl;
        this->radius = 0;
    } else {
        this->radius = radius;
    }
}

double Circle::getRadius() const {
    return radius;
}

double removeTrailingZeros(double number) {
    double factor = 1.0;
    int decimalPlaces = 0;

    while (number * factor != static_cast<long long>(number * factor)) {
        factor *= 10.0;
        decimalPlaces++;
    }

    int precision = decimalPlaces > 0 ? decimalPlaces : 1;
    cout << fixed << setprecision(precision);

    return number;}

double calculateArea(double radius) {
    double area;
    area = PI * pow(radius, 2);
    return area;
}

void print(const Circle& circle) {
    // No inline functions
    string circleName = circle.getName();
    double trimmedNumber = removeTrailingZeros(circle.getRadius());
    double circleArea = calculateArea(circle.getRadius());
    
    // Print output
    cout << "Circle of " << circleName << " with radius of " << trimmedNumber;
    cout << " has area of " << fixed << setprecision(3) << circleArea << endl;
}
