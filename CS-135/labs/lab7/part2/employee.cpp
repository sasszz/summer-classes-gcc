//
//  employee.cpp
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Lab 7 Part 2

#include "employee.h"
#include <iostream>
#include <iomanip>

using namespace std;

Employee::Employee(const string& name, const string& idNumber, const string& department, const string& position, int yearsWorked) {
    this->name = name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
    if (yearsWorked < 0) {
        cout << "Error: Years Worked cannot be less than zero. Setting yearsWorked to zero." << endl;
//        this->yearsWorked = 0;
    } else {
        this->yearsWorked = yearsWorked;
    }}

Employee::Employee(const string& name, const string& idNumber) {
    this->name = name;
    this->idNumber = idNumber;
    this->department = "";
    this->position = "";
    this->yearsWorked = 0;
}

Employee::Employee() {
    this->name = "";
    this->idNumber = "";
    this->department = "";
    this->position = "";
    this->yearsWorked = 0;
}

string Employee::getName() const {
    return name;
}

void Employee::setName(const string& name) {
    this->name = name;
}

string Employee::getIdNumber() const {
    return idNumber;
}

void Employee::setIdNumber(const string& idNumber) {
    this->idNumber = idNumber;
}

string Employee::getDepartment() const {
    return department;
}

void Employee::setDepartment(const string& department) {
    this->department = department;
}

string Employee::getPosition() const {
    return position;
}

void Employee::setPosition(const string& position) {
    this->position = position;
}

int Employee::getYearsWorked() const {
    return yearsWorked;
}

bool Employee::setYearsWorked(int yearsWorked) {
    if (yearsWorked < 0) {
        return false;
    }
    this->yearsWorked = yearsWorked;
    return true;
}

void printDetails(const Employee& employee) {
    cout << setw(15) << right << employee.getName();
    cout << setw(7) << right << employee.getIdNumber();
    cout << setw(15) << right << employee.getDepartment();
    cout << setw(12) << right << employee.getPosition();
    cout << setw(3) << right << employee.getYearsWorked() << endl;
}

