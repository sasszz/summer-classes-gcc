//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Lab 7 Part 1

#include <iostream>
#include "circle.h"

using namespace std;

int lab7part1() {
    Circle circle1(15.3, "Large");

    double radius;
    cout << "Radius of the small circle? ";
    cin >> radius;

    Circle circle2;
    circle2.setRadius(radius);
    circle2.setName("Small");

    print(circle1);
    print(circle2);

    return 0;
}
