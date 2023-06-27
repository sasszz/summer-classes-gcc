//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 6/27/23.
//  CS-135, Lab 1
//
// ###############################################################################################
// PSEUDOCODE
// Output Welcome to INTERPLANETARY TRAVEL PROGRAM!
// Output This program enables you to find out your travel time to the planet you want to travel to as well as your weight on there.
// Output Please enjoy the program and hope you'll find the perfect planet for you!
//
// Output:
// INTERPLANETARY TRAVEL MENU
// ---------------------------
// a) Mercury
// b) Venus
// c) Earth
// d) Mars
// e) Jupiter
// f) Saturn
// g) Uranus
// h) Neptune
// i) Pluto
// q) Quit
//
// Output Select a planet to travel to or q to quit the program:
// Input character
// Output Please enter your weight on Earth:
// Input number
// Output Please enter your speed in mph:
// Input number
//
// Output:
// INTERPLANETARY TRAVEL: Earth to input_var
// ---------------------------------------------------
// Your weight on Mercury: output_var lbs
//
// Your travel time to Mercury:
// In Hours: output_var hours
// In Days: output_var days
// In Years: output_var years

// ###############################################################################################
// EQUATIONS
// 1. Weight on New Planet = Weight on Earth * Surface Gravity of New Planet
// 2. Distance between Planets (if Earth is further from sun) = Distance from Earth to Sun – Distance from New Planet to Sun
// 3. Distance between Planets (if New Planet is further from sun) = Distance from New Planet to Sun – Distance from Earth to Sun
// 4. Travel Time (in hours) = Travel Distance (in miles)/Rate (miles per hour)

// ###############################################################################################
// DATA FOR CALCULATIONS
// Planet            Distance from Sun           Surface Gravity
//                       (in millions of miles)        as a function of Earth’s gravity
// Mercury                      36                                0.27
// Venus                        67                                0.86
// Earth                        93                                1.00
// Mars                        141                                0.37
// Jupiter                     483                                2.64
// Saturn                      886                                1.17
// Uranus                    1,782                                0.92
// Neptune                   2,793                                1.44
// Pluto                     3,670                                0.063


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    return 0;
}
