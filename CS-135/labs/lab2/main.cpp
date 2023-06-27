//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 6/27/23.
//  CS-135, Lab 2
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
// Input character (variable userResponse)
// Output Please enter your weight on Earth:
// Input number (variable userWeight)
// Output Please enter your speed in mph:
// Input number (variable userVehicleSpeed)
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
// ----> Distance between planets = abs(distanceFromEarthtoSun - distanceFromPlanettoSun)
// 4. Travel Time (in hours) = Travel Distance (in miles)/Rate (miles per hour)
// ----> make sure to multiply by 1000000 !

// ###############################################################################################
// DATA FOR CALCULATIONS
// Planet            Distance from Sun           Surface Gravity
//                       (in millions of miles)        as a function of Earth’s gravity
// a Mercury                      36                                0.27
// b Venus                        67                                0.86
// c Earth                        93                                1.00
// d Mars                        141                                0.37
// e Jupiter                     483                                2.64
// f Saturn                      886                                1.17
// g Uranus                    1,782                                0.92
// h Neptune                   2,793                                1.44
// i Pluto                     3,670                                0.063


#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

// IINITIALIZE LOOKUP TABLE
struct PlanetData {
    string planetName;
    double distanceFromSun;
    double gravity;
};

int main() {
    // IINITIALIZE VARIABLES
    char userResponse;
    double userWeight;
    double userVehicleSpeedMPH;
    double calculatedWeight;
    double calculatedDistance;
    double travelTimeInHours;
    double travelTimeInDays;
    double travelTimeInYears;
    
    // LOOKUP TABLE
    map<char, PlanetData> planetLookupTable;
    planetLookupTable['a'] = {"Mercury", 36.0, 0.27};
    planetLookupTable['b'] = {"Venus", 67.0, 0.86};
    planetLookupTable['c'] = {"Earth", 93.0, 1.0};
    planetLookupTable['d'] = {"Mars", 141.0, 0.37};
    planetLookupTable['e'] = {"Jupiter", 483.0, 2.64};
    planetLookupTable['f'] = {"Saturn", 886.0, 1.17};
    planetLookupTable['g'] = {"Uranus", 1782.0, 0.92};
    planetLookupTable['h'] = {"Neptune", 2793.0, 1.44};
    planetLookupTable['i'] = {"Pluto", 3670.0, 0.063};
    
    // INTRO
    cout << "Welcome to INTERPLANETARY TRAVEL PROGRAM!" << endl;
    cout << "This program enables you to find out" << endl;
    cout << "your travel time to the planet" << endl;
    cout << "you want to travel to as well as your weight on there." << endl;
    cout << "Please enjoy the program and hope you'll find the perfect planet for you!" << endl;
    cout << endl;
    cout << endl;

    // MENU
    cout << "INTERPLANETARY TRAVEL MENU" << endl;
    cout << "---------------------------" << endl;
    cout << "a) Mercury" << endl;
    cout << "b) Venus" << endl;
    cout << "c) Earth" << endl;
    cout << "d) Mars" << endl;
    cout << "e) Jupiter" << endl;
    cout << "f) Saturn" << endl;
    cout << "g) Uranus" << endl;
    cout << "h) Neptune" << endl;
    cout << "i) Pluto" << endl;
    cout << "q) Quit" << endl;
    cout << endl;
    
    // USER INPUTS
    cout << "Select a planet to travel to or q to quit the program: ";
    cin >> userResponse;
    cout << endl;
    if (userResponse == 'q') {
        cout << "Quitting the program..." << endl;
        return 0;
    } else if(planetLookupTable.count(userResponse) == 0) {
        cout << "Invalid choice. Please try again." << endl;
        return 0;
    }
    else {
        cout << "Please enter your weight on Earth: ";
        cin >> userWeight;
        cout << endl;
        cout << "Please enter your speed in mph: ";
        cin >> userVehicleSpeedMPH;
        cout << endl;
        
        // COMPUTATIONS
        PlanetData Earth = planetLookupTable['c'];
        PlanetData planet = planetLookupTable[userResponse];
        calculatedWeight = planet.gravity * userWeight;
        calculatedDistance = (abs(Earth.distanceFromSun - planet.distanceFromSun)) * 1000000;
        travelTimeInHours = calculatedDistance / userVehicleSpeedMPH;
        travelTimeInDays = travelTimeInHours / 24;
        travelTimeInYears = travelTimeInDays / 365;
        
        
        // ITINERARY OUTPUT
        cout << "INTERPLANETARY TRAVEL:  Earth to " << planet.planetName << endl;
        cout << "---------------------------------------------------" << endl;
        cout << fixed << setprecision(2);
        cout << "Your weight on " << planet.planetName << ": " << calculatedWeight << " lbs" << endl;
        cout << endl;
        cout << "Your travel time to " << planet.planetName << ":" << endl;
        cout << "\tIn Hours: " << travelTimeInHours << " hours" << endl;
        cout << "\tIn Days: " << travelTimeInDays << " days" << endl;
        cout << "\tIn Years: " << travelTimeInYears << " years" << endl;
    }

    return 0;
}
