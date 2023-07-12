//
//  topic2.cpp
//  topics
//
//  Created by Lucie Chevreuil on 7/11/23.
//  Topic 1

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const double DISCOUNT_PERCENT = 0.08;
const double DISCOUNT_LIMIT = 10.0;

double calculateDiscount(double purchase)
{
    double discount = 0;
    if (purchase >= DISCOUNT_LIMIT)
        discount = purchase * DISCOUNT_PERCENT;
    return discount;
}

int main()
// CORRECTED CODE
{
    string filename, itemDiscount;
    double totalPurchase = 0;
    ifstream inFile;
    ofstream outFile;

    cout << "Please enter the file with purchases: ";
    cin >> filename;

    inFile.open(filename);
    outFile.open("discount.txt");

    outFile << setprecision(2) << fixed;

    if (!inFile.fail() && !outFile.fail()){
        
        double purchase;
        double totalDiscount = 0;
        while (inFile >> purchase)
        {
            totalPurchase += purchase;
            double discount = calculateDiscount(purchase);
            totalDiscount += discount;
            outFile << purchase << " " << discount << endl;
        }

        cout << setprecision(2) << fixed;
        cout << "Total = " << totalPurchase << " total discount = " << totalDiscount << endl;

        inFile.close();
        outFile.close();
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    return 0;
}

// INITIAL CODE TO BE CORRECTED
//{
//    string filename;
//    double total = 0, totalDiscount = 0, discount, purchase;
//    const double DISCOUNT_PERCENT = 0.08;
//    const double discountLimit = 10.0;
//    ifstream inFile;
//    ofstream outFile;
//    cout << "Please enter file with purchases: ";
//    cin >> filename;
//    inFile.open(filename);
//    outFile.open("discount.txt");
//    outFile << setprecision(2) << fixed;
//    while (inFile >> purchase)
//    {
//        total += purchase;
//        discount = 0;
//        if (purchase >= discountLimit)
//            discount = purchase * DISCOUNT_PERCENT;
//        outFile << purchase << " " << discount << endl;
//    }
//    cout << setprecision(2) << fixed;
//    cout << "Total = " << total << " total discount = " << discount << endl;
//    inFile.close();
//}
