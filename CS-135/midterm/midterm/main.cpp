//
//  main.cpp
//  midterm
//
//  Created by Lucie Chevreuil on 7/6/23.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;


int xyz(int a) {
    return (a > 5 ? a/2 : a*2);
}



double calculateBoxVolume(double length, double width, double depth) {
    if (length > 0 && width > 0 && depth > 0) {
        return length * width * depth;
    } else {
        return 0;
    }
}

double ageAverager(){
    srand(13); // Set seed for random number generation

    int sum = 0;
    int age;
    const int minAge = 18;
    const int maxAge = 22;
    const int numOfRandomValues = 8;

    for (int i = 0; i < numOfRandomValues; ++i) {
        age = minAge + rand() % (maxAge - minAge + 1);
        sum += age;
        cout << "Random age: " << age << endl;
    }

    double average = static_cast<double>(sum) / numOfRandomValues;
    cout << "Average age: " << average << endl;
    return average;
}



int main() {
    
//    double bonus = 12.5;
//    int customerRewards = 89;
//    if (customerRewards > 89) {
//        bonus *= 2;
//    }
//    else if (customerRewards > 69) {
//        bonus += 2;
//    }
//    else if (customerRewards  > 50) {
//        bonus -= 2;
//    }
//    else {
//        bonus /= 2;
//    }
//    cout << bonus << endl;
//
//    double bonus1 = 128/10.0;
//    cout << bonus1 << endl;
//
//    float num = 15.6666;
//    cout << num << endl;
//
//    cout << fixed << setprecision(3) << num << endl;
//
//    for(int i = 0; i < 21; i++) {
//        if(i == 13) {
//            continue;
//        }
//        else {
//            cout << i;
//        }
//    }
//
//    double x = 18.2;
//
//    x += 2;
//
//    cout << setprecision(1) << fixed << "x = " << x << endl;
//
//    int y = 10;
//
//    if ( y == 10)
//
//    {
//
//        int s = 30;
//
//        s += y;
//
//    }
//
////    cout << "x = " << s << endl;
//
//    int z = 23;
//
//    cout << xyz(z) << endl;
//
//
//    // INITIALIZE VARIABLES
//    double miles, averageSpeed, time;
//
//    cout << "Enter miles to travel: ";
//    cin >> miles;
//    cout << endl;
//
//    cout << "Enter average speed (in miles per hour): ";
//    cin >> averageSpeed;
//    cout << endl;
//
//    // CALCULATIONS
//    time = miles / averageSpeed;
//
//    cout << "Estimated time of arrival: " << time << " hours" << endl;
//
//
    ageAverager();
}

