//
//  main.cpp
//  topics
//
//  Created by Lucie Chevreuil on 6/28/23.
//  Topic 1
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double price = 9.95;
    double total, discount;
    int x;
    bool discounted;

    cout << "Buy 3 or more widgets at the price of $9.95 each\n"
         << "and get a 12% discount" << endl;

    cout << "How many widgets? ";
    
    while (!(cin >> x) || x < 0)
    {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // prevents infinite loop
        cout << "How many widgets? ";
    }
    
    x >= 3 ? discount = 1 - 0.12 : discount = 1;
    discount != 1 ? discounted = true : discounted = false;
    
    total = x * (price * discount);
    
    cout << fixed << setprecision(2) << "You have bought " << x << " widgets" << endl
         << "  at $" << price << " each " << endl
         << "  Total $" << total << endl;
    
    discounted ? cout << "which includes a discount of 12%" << endl : cout << " which does not include a discount of 12%" << endl;

    return 0;
}
