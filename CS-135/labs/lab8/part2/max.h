//
//  max.hpp
//  labs
//
//  Created by Lucie Chevreuil on 7/19/23.
//  Lab 8 Part 2

#ifndef max_h
#define max_h

#include <stdio.h>

template <class T>
T findMax(T a, T b, T c) {
    T max_val = a > b ? a : b;
    return max_val > c ? max_val : c;
}
#endif /* max_h */
