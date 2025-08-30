#include <iostream> // Includes input/output stream library
#include "greet.h"
#include "basics.h"

// Function to clear the terminal screen
void clearScreen() {
#ifdef _WIN32
    system("cls");  // Windows command
#else
    system("clear");  // Linux/Mac command
#endif
}

int main() { // Main function: program entry point
    std::cout << "Hello World\n"; // Prints Hello World to the console
    greet();

    /*Create a menu switch statement
    * Case 1: Call demonstrateVariables()
    * Case 0: Exit the program
    * changes to the switch statement will be added as more files are created
    */
    int choice;

    //0 is a standard for exiting a switch statement
    while (choice != 0) {
    std::cout << "\n--- Main Menu ---\n";
    std::cout << "1. Demonstrate Variables\n";
    std::cout << "0. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            clearScreen(); // Clear the screen before showing variables
            std::cin.ignore(); // Clear the newline from menu input
            demonstrateVariables();
            break;
        case 0: //q is used to exit the screen instead as a quit case
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break; 
    }
    clearScreen(); 
    }

    std::cout << "Press ENTER to exit." << std::endl; // Prints prompt and flushes output
    std::cin.get(); // Waits for user to press ENTER

    return 0; // Returns 0 to indicate successful execution
}
