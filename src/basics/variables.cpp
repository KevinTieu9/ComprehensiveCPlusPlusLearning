/*
 * ===========================================
 * BASICS MODULE: VARIABLES & DATA TYPES
 * ===========================================
 *
 * LEARNING OBJECTIVES:
 * - Understand different data types in C++
 * - Learn variable declaration and initialization
 * - Practice input/output with variables
 * - Understand memory concepts (size of data types)
 *
 * WHAT YOU NEED TO KNOW BEFORE STARTING:
 * 1. #include <iostream> - for cout/cin
 * 2. #include <string> - for string data type
 * 3. Basic syntax: type variableName = value;
 * 4. cout << variable; to display values
 * 5. cin >> variable; to read user input
 *
 * IMPLEMENTATION STEPS:
 * 1. Declare variables of different types (int, float, char, bool, string)
 * 2. Initialize some variables with values
 * 3. Demonstrate sizeof() operator to show memory usage
 * 4. Create a simple interactive program that asks for user input
 * 5. Display all variables and their values
 *
 * CONCEPTS TO RESEARCH IF NEW:
 * - Primitive data types (int, float, double, char, bool)
 * - String class and string literals
 * - Variable naming conventions (camelCase, snake_case)
 * - Type safety in C++
 * - Memory allocation for different data types
 */

#include <iostream>
#include <string>

void demonstrateVariables(){
    //1. Declare variables of each type above
    //2. Initialize some with values
    int age;
    int count;
    int temperature;
    int score;

    float price;
    float weight = 153.5;
    float percentage;
    double pi;

    char grade = 'A';
    char initial;
    char symbol;

    bool isStudent = true;
    bool hasLicense = true;
    bool isActive = false;

    std::string name;
    std::string address;
    std::string message = "Hello " + name;

    // Input Section
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "What is your age? ";
    std::cin >> age;
    std::cout << "What is your address? ";
    std::cin.ignore(); // Clear the newline from previous input
    std::getline(std::cin, address);

    // Add empty line for cleaner output
    std::cout << std::endl;

    // Output Section
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Message: " << message << ", " << name << std::endl;
    std::cout << name << " is a student?: " << isStudent << std::endl;
    std::cout << "Your grade for the class is: " << grade;

    // Show size of each variable
    std::cout << "\n--- Variable Sizes ---\n";
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "Size of string: " << sizeof(std::string) << " bytes" << std::endl;

    // Demonstrate type conversion
    //float f = 5.5;
    //int i = static_cast<int>(f);
    //std::cout << "Float value: " << f << ", Converted to int: " << i << std::endl;
    //used to pause before returning to main program
    std::cout << "Press ENTER to continue...";
    std::cin.get();
}

/*
 * ADVANCED CHALLENGES (Optional):
 * 1. Create a struct to group related variables
 * 2. Use const for variables that shouldn't change
 * 3. Demonstrate variable scope (local vs global)
 * 4. Show what happens with uninitialized variables
 * 5. Experiment with different number bases (decimal, hex, octal)
 */

/*
 * TESTING YOUR UNDERSTANDING:
 * After implementing, you should be able to:
 * - Explain why we use different data types
 * - Predict memory usage of your variables
 * - Handle user input safely
 * - Format output nicely
 * - Convert between compatible types
 */
