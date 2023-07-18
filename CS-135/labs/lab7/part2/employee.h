//
//  employee.h
//  labs
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Lab 7 Part 2

#ifndef employee_h
#define employee_h

#include <stdio.h>

#include <string>

class Employee {
private:
    std::string name;
    std::string idNumber;
    std::string department;
    std::string position;
    int yearsWorked;

public:
    Employee(const std::string& name, const std::string& idNumber, const std::string& department, const std::string& position, int yearsWorked);
    Employee(const std::string& name, const std::string& idNumber);
    Employee();

    std::string getName() const;
    void setName(const std::string& name);
    std::string getIdNumber() const;
    void setIdNumber(const std::string& idNumber);
    std::string getDepartment() const;
    void setDepartment(const std::string& department);
    std::string getPosition() const;
    void setPosition(const std::string& position);
    int getYearsWorked() const;
    bool setYearsWorked(int yearsWorked);
};

void printDetails(const Employee& employee);
#endif /* employee_h */
