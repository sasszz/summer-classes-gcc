//
//  main.cpp
//  discussions
//
//  Created by Lucie Chevreuil on 7/16/23.
//  Discussion 8, CS-135

// 1. Why use UML?
// UML (Unified Modeling Language) is a standardized visual modeling language that facilitates effective communication and understanding of complex software systems among stakeholders. It supports analysis and design phases, enabling developers to document requirements, visualize system architecture, and model software components, resulting in improved collaboration and software quality.

// 2. What is a constructor and how can it be used?
// A constructor in C++ is a special member function of a class that is automatically called when an object of that class is created, used to initialize the object's data members or perform other setup operations.

// 3. What is one of the foundations of object-oriented program? Why?
// Object reusability is a core principle of object-oriented programming in C++ because it promotes code efficiency and modularity by allowing objects to be easily reused in different parts of a program or in different programs altogether, saving development time and effort. By designing reusable objects, developers can encapsulate functionality, promote code organization, and create a more maintainable and extensible codebase.

// 4. Create an array of objects of class Person, 5 objects. The class Person will have age and name. Create the class to just have a default constructor. Then have main input ages and names to put in that array. Print the array.

#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person() {} // Default constructor

    int age;
    string name;
};

int main() {
    Person people[5];

    // Input age and name for each person
    for (int i = 0; i < 5; i++) {
        cout << "Enter age for person " << i + 1 << ": ";
        cin >> people[i].age;

        cout << "Enter name for person " << i + 1 << ": ";
        cin.ignore(); // Ignore the newline character in the input buffer
        getline(cin, people[i].name);
    }

    // Print the array
    cout << "People: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Person " << i + 1 << ": Age = " << people[i].age << ", Name = " << people[i].name << "\n";
    }

    return 0;
}
