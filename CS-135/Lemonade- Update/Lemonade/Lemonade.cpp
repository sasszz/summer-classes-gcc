//
//  Lemonade.cpp
//  Lemonade
//
//  Created by Lucie Chevreuil on 7/20/23.
//  CS-135, Lemonade Final Code Project

#include "Lemonade.h"
#include <iostream>
#include <iomanip>

using namespace std;

Lemonade::Lemonade(std::string flavor, double price, bool cookie)
    : flavor(flavor), price(price), cookie(cookie) {}

Lemonade::Lemonade()
    : flavor(""), price(0), cookie(false) {}

std::string Lemonade::getFlavor() const {
    return flavor;
}

double Lemonade::getPrice() const {
    return price;
}

bool Lemonade::hasCookie() const {
    return cookie;
}

void Lemonade::setFlavor(std::string newFlavor) {
    flavor = newFlavor;
}

void Lemonade::setPrice(double newPrice) {
    if (newPrice >= 0) {
        price = newPrice;
    } else {
        cout << "Error: Price cannot be less than 0." << endl;
    }
}

void Lemonade::setCookie(bool hasCookie) {
    cookie = hasCookie;
}

double Lemonade::chargeTax() const {
    return cookie ? (price + COOKIE_PRICE) * SALES_TAX : price * SALES_TAX;
}

void Lemonade::printReceipt() const {
    cout << fixed << setprecision(2);
    cout << "Summer Lemonade:" << endl;
    cout << "Ordered " << flavor << " at $ " << price << endl;
    cookie ? cout << "With optional cookie $ " << COOKIE_PRICE << endl : cout << "";
    
    double taxAmount = chargeTax();
    cout << "Sales tax $ " << fixed << setprecision(2) << taxAmount << endl;
    cookie ? cout << "Total $ " << (price + taxAmount + COOKIE_PRICE) << endl : cout << "Total $ " << (price + taxAmount) << endl;
}
