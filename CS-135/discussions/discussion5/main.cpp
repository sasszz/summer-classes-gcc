//
//  main.cpp
//  discussions
//
//  Created by Lucie Chevreuil on 7/3/23.
//

#include <stdio.h>
    // ####################################################################################
    // 1. Why are C++ programs generally in 3 major parts: header, implementation, and main?
    // ####################################################################################

    // Header: This section contains function prototypes, class declarations, and any necessary include statements. It provides a forward declaration of the functions and classes used in the program.
    // Implementation: This section contains the actual definitions of the functions and classes declared in the header. It includes the logic and implementation details of the program.
    // Main: This section contains the main function, which serves as the entry point of the program. It typically contains the program's control flow and orchestrates the execution of other functions and classes defined in the implementation section.

    // The separation of these parts helps improve code organization, modularity, and readability. It also facilitates code reuse and allows for easier maintenance and debugging.
    

    // ####################################################################################
    // 2. What would a prototype of function findMax look like that takes 2 integers and returns the greater value? What would the code of that function look like?
    // ####################################################################################

    // PROTOTYPE
    int findMax(int num1, int num2);

    // IMPLEMENTATION
    int findMax(int num1, int num2) {
        return (num1 > num2) ? num1 : num2;
    }


    // ####################################################################################
    // 3. How would you overload findMax to take 2 doubles instead?
    // ####################################################################################

    // OVERLOAD PROTOTYPE
    double findMax(double num1, double num2);

    // OVERLOAD IMPLEMENTATION
    double findMax(double num1, double num2) {
        return (num1 > num2) ? num1 : num2;
    }


    // ####################################################################################
    // 4. Assuming you have two findMax functions, what would main look like that print the max of 13 and 6, 4 and 77, 3.2 and 2.1, and 33.44 and 45.2?
    // ####################################################################################
    #include <iostream>
       
    using namespace std;
    
    // CHANGE TO MAIN FOR IT TO RUN
    int disc5() {
        // Example 1: Using integers
        int maxInt1 = findMax(13, 6);
        cout << "Max of 13 and 6: " << maxInt1 << endl;
        // OUTPUT: 13
       
        // Example 2: Using integers
        int maxInt2 = findMax(4, 77);
        cout << "Max of 4 and 77: " << maxInt2 << endl;
        // OUTPUT: 77

        // Example 3: Using doubles
        double maxDouble1 = findMax(3.2, 2.1);
        cout << "Max of 3.2 and 2.1: " << maxDouble1 << endl;
        // OUTPUT: 3.2

        // Example 4: Using doubles
        double maxDouble2 = findMax(33.44, 45.2);
        cout << "Max of 33.44 and 45.2: " << maxDouble2 << endl;
        // OUTPUT: 45.2

        return 0;
    }


    // ####################################################################################
    // 5. Where can "using namespace std" be put? Where can it NOT be put!
    // ####################################################################################

    // The `using namespace std;` statement can be placed within the global scope of a C++ program, typically before the `main` function. It brings all the names from the `std` namespace into the current scope, allowing you to use them without explicitly specifying the `std::` prefix.

    // However, it is generally recommended to avoid using `using namespace std;` directly in a header file, as it can introduce naming conflicts when multiple headers are included. It is considered good practice to use the `std::` prefix when referencing names from the `std` namespace within a header file.

    // ####################################################################################
    // 6. Where would you use something like "using std::string"?
    // ####################################################################################

    // The `using std::string;` statement would typically be used within the implementation section

