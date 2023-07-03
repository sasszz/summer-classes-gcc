//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 6/21/23.
//  CS-135, Lab 1
//

// OUTLINE
// Intro
// Collect num input for explorers
// Set to var
// Collect num input for explorers lost
// Set to var
// Set new var to difference
// Present values to user
// Present gold paragraph to user
// 750 % difference will be extra gold pieces

// PSEUDOCODE
// output "Welcome to Lost Fortune!"
// output newline
// output "Please answer the following questions for your personalized adventure:"
// output newline
// output "Enter the number of Explorers: "
// input numExplorers
// output "Enter the number of Explorers Lost in Battle: "
// input numExplorersLost
// difference = numExplorers - numExplorersLost
// output newline
// output "You bravely led " + numExplorers + " adventurers on a quest for gold."
// output "The group fought a band of ogres and lost " + numExplorersLost + " members."
// output "Only " + difference + " survived."
// output newline
// remainder = 750 modulo difference
// output "The party was about to give up when they stumbled upon the"
// output "buried fortune of 750 gold pieces. The group split the loot evenly"
// output "and as the quest leader you kept the extra " + remainder + " gold pieces."
// return 0


#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

// RENAME FX TO MAIN FOR IT TO RUN
int lab1part2() {
    cout << "Welcome to Lost Fortune!" << endl;
    cout << endl;
    cout << "Please answer the following questions for your personalized adventure:" << endl;
    cout << endl;
    
    cout << "Enter the number of Explorers: ";
    int numExplorers;
    cin >> numExplorers;
//    cout << numExplorers << endl;
    cout << "Enter the number of Explorers Lost in Battle: ";
    int numExplorersLost;
    cin >> numExplorersLost;
//    cout << numExplorersLost << endl;
    int difference = numExplorers - numExplorersLost;
    cout << endl;

    cout << "You bravely led " << numExplorers << " adventurers on a quest for gold." << endl;
    cout << "The group fought a band of ogres and lost " << numExplorersLost << " members." << endl;
    cout << "Only " << difference << " survived." << endl;
    cout << endl;

    int remainder = 750 % difference;
    cout << "The party was about to give up when they stumbled upon the" << endl;
    cout << "buried fortune of 750 gold pieces.The group split the loot evenly" << endl;
    cout << "and as the quest leader you kept the extra " << remainder << " gold pieces." << endl;


    return 0;

}
