/*
 * ===========================================
 * BASICS MODULE: FUNCTIONS & PARAMETERS
 * ===========================================
 *
 * LEARNING OBJECTIVES:
 * - Understand function declaration and definition
 * - Learn parameter passing (by value, by reference)
 * - Practice return values and void functions
 * - Master function overloading
 * - Understand scope and lifetime
 *
 * WHAT YOU NEED TO KNOW BEFORE STARTING:
 * 1. Function syntax: returnType functionName(parameters) { body }
 * 2. void functions don't return values
 * 3. Parameters are inputs to functions
 * 4. return statement exits function and returns value
 * 5. Functions must be declared before use
 *
 * IMPLEMENTATION STEPS:
 * 1. Create functions with different return types (int, double, string, void)
 * 2. Demonstrate parameter passing (by value vs by reference)
 * 3. Show function overloading (same name, different parameters)
 * 4. Create functions with default parameters
 * 5. Demonstrate local vs global scope
 *
 * CONCEPTS TO RESEARCH IF NEW:
 * - Function prototypes/declarations vs definitions
 * - Pass by value vs pass by reference (&)
 * - const parameters (prevent modification)
 * - Function scope and variable lifetime
 * - Stack vs heap memory for functions
 */

#include <iostream>
#include <string>

// TODO: Declare global variables (accessible from all functions)
// Research: When to use global vs local variables?
//int globalCounter = 0;

// TODO: Create a simple void function (no return value)
// Function signature: void greetUser()
// Purpose: Display a welcome message
// Parameters: None
// Example usage: greetUser();

// TODO: Create a function with return value
// Function signature: int addNumbers(int a, int b)
// Purpose: Add two integers and return result
// Parameters: Two integers to add
// Returns: Sum of the two numbers
// Example usage: int result = addNumbers(5, 3);

// TODO: Create a function with string parameter
// Function signature: std::string formatMessage(std::string name, int age)
// Purpose: Create a formatted message using parameters
// Parameters: Person's name and age
// Returns: Formatted string message
// Example usage: std::string msg = formatMessage("Alice", 25);

// TODO: Demonstrate pass by reference
// Function signature: void swapValues(int& a, int& b)
// Purpose: Swap two integer values using references
// Parameters: Two integers (passed by reference)
// Returns: Nothing (values swapped in place)
// Research: Difference between & and no & in parameters?

// TODO: Create overloaded functions (same name, different parameters)
// Function signatures:
// double calculateArea(double radius)  // Circle area
// double calculateArea(double length, double width)  // Rectangle area
// Research: How does C++ know which version to call?

// TODO: Function with default parameters
// Function signature: void displayInfo(std::string name, int age = 18, std::string city = "Unknown")
// Purpose: Display person info with default values
// Parameters: name (required), age and city (optional with defaults)
// Research: Rules for default parameters?

// TODO: Demonstrate function scope
// Create functions that show:
// - Local variables (only exist inside function)
// - Global variables (accessible everywhere)
// - Parameter scope
// Research: What happens to local variables when function ends?

/*
 * TODO: Create a main demonstration function
 * Function signature: void demonstrateFunctions()
 * This function should:
 * 1. Call all the functions above
 * 2. Display results using cout
 * 3. Show examples of each concept
 * 4. Demonstrate scope differences
 *
 * Function signature: void demonstrateFunctions()
 */

/*
 * TODO: In your main program (src/core/hello.cpp),
 * add a menu option to call this function:
 *
 * std::cout << "1. Demonstrate Variables" << std::endl;
 * std::cout << "2. Demonstrate Functions" << std::endl;  // Add this
 * // ... other options
 *
 * Then in switch statement:
 * case 1:
 *     demonstrateVariables();
 *     break;
 * case 2:  // Add this case
 *     demonstrateFunctions();
 *     break;
 */

/*
 * ADVANCED CHALLENGES (Optional):
 * 1. Create recursive functions (functions that call themselves)
 * 2. Use function pointers
 * 3. Create functions with const parameters
 * 4. Implement function templates (generic functions)
 * 5. Create inline functions for performance
 */

/*
 * TESTING YOUR UNDERSTANDING:
 * After implementing, you should be able to:
 * - Explain why we use functions
 * - Choose between pass by value vs reference
 * - Use function overloading appropriately
 * - Understand variable scope rules
 * - Create reusable code modules
 */

/*
 * COMMON FUNCTION PATTERNS TO MASTER:
 *
 * 1. Getters/Setters: int getValue(); void setValue(int val);
 * 2. Calculators: double calculateTax(double income);
 * 3. Validators: bool isValidEmail(std::string email);
 * 4. Converters: std::string intToString(int number);
 * 5. Display functions: void printHeader(); void showMenu();
 */
