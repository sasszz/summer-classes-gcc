//
//  main.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Lab 7 Part 2

#include "employee.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Employee employee1("Jenny Jacobs", "JJ8990", "Accounting", "President", 15);
    Employee employee2("Myron Smith", "MS7571");
    Employee employee3;

    int yearsWorked;

    cout << "How many years has " << employee2.getName() << " worked at the company? ";
    cin >> yearsWorked;
    cout << endl;
    employee2.setYearsWorked(yearsWorked);
    employee2.setDepartment("IT");
    employee2.setPosition("Programmer");

    employee3.setName("Chris Raines");
    cout << "How many years has " << employee3.getName() << " worked at the company? ";
    cin >> yearsWorked;
    cout << endl;
    employee3.setYearsWorked(yearsWorked);
    employee3.setName("Chris Raines");
    employee3.setIdNumber("CR6873");
    employee3.setDepartment("Manufacturing");
    employee3.setPosition("Engineer");

    printDetails(employee1);
    printDetails(employee2);
    printDetails(employee3);

    return 0;
}
