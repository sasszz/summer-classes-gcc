//
//  Lemonade.h
//  Lemonade
//
//  Created by Lucie Chevreuil on 7/20/23.
//  CS-135, Lemonade Final Code Project

// UML DIAGRAM
// +--------------------------------------+
// |              Lemonade                |
// +--------------------------------------+
// | - flavor: std::string                |
// | - price: double                      |
// | - cookie: bool                       |
// +--------------------------------------+
// | + Lemonade(flavor: std::string,      |
// |            price: double,            |
// |            cookie: bool = false)     |
// | + Lemonade()                         |
// | + getFlavor(): std::string           |
// | + getPrice(): double                 |
// | + hasCookie(): bool                  |
// | + setFlavor(newFlavor: std::string)  |
// | + setPrice(newPrice: double)         |
// | + setCookie(hasCookie: bool)         |
// | + chargeTax(): double                |
// | + printReceipt(): void               |
// +--------------------------------------+

#ifndef Lemonade_h
#define Lemonade_h

#include <stdio.h>
#include <iostream>
#include <string>

// GLOBAL CONSTANTS
double const SALES_TAX = 0.085;
double const COOKIE_PRICE = 1.99;

// CLASS
class Lemonade {
private:
    std::string flavor;
    double price;
    bool cookie;

public:
    Lemonade(std::string flavor, double price, bool cookie = false);
    Lemonade();

    // Getter methods
    std::string getFlavor() const;
    double getPrice() const;
    bool hasCookie() const;

    // Setter methods
    void setFlavor(std::string newFlavor);
    void setPrice(double newPrice);
    void setCookie(bool hasCookie);
    
    // Calculate the sales tax on the price or the price + cookie
    double chargeTax() const;

    // Print a receipt for the order of lemonade
    void printReceipt() const;
};

#endif /* Lemonade_h */
