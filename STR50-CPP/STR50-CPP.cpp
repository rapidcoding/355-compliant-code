#include <iostream>
#include <string>

/**
 *@brief Program that reads an input from the user and prints it back to them
 *This safely follows rule STR50-CPP as it utilizes std::string input which automatically adjusts to the size that the user inputs which ensures we don't overflow
 */
int main()
{
    // Create a safe string as opposed to an unsafe confined buffer
    std::string input;
    std::cout << "Enter a string: ";

    // Safely accept the user's input and avoid any chance of overflowing
    std::cin >> input;
    std::cout << "Your input is: " << input << "\n";
    return 0;
}