//
//  Stats.hpp
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Lab 7 Part 3

#ifndef Stats_hpp
#define Stats_hpp

#include <stdio.h>

class Stats {
private:
    double rain[12];

public:
    Stats();
    void setValue(int index, double value);
    double getValue(int index);
    void printValues();
    double getTotal();
    double getAvg();
    double getLargest();
    double getSmallest();
};

#endif /* Stats_hpp */
