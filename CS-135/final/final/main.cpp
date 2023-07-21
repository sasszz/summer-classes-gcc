//
//  main.cpp
//  final
//
//  Created by Lucie Chevreuil on 7/20/23.
//

#include <iostream>

using namespace std;

void xyz(int &x) {
    int y = 3;
    x %= y;
    cout << x-- << endl;
}

int main() {
//    int y = 8;
//    xyz(y);
//    cout << y << endl;
//    return 0;
    
    int ary[] = {11, 23, 6, 3, 20};

    int count = 0;

    for (int index = 0; index < 5; index++) {
        
        if (ary[index] % 5 == 1) {
            
            count++; }}
    cout << count << endl;
    
    int arr[5]; // Declare an array of 5 integers

    // Calculate the size of the array in bytes
    size_t size = sizeof(arr);

    // Output the size of the array in bytes
    cout << "Size of the array: " << size << " bytes" << endl;

    return 0;
}
