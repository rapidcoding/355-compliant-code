#include <iostream>

/**
 *@brief A simple program that defines a character array and safely modifies the string stored in the character array to make the first letter uppercase
 *This safely follows the recommendation STR30-C as we are safely modifying a character array as opposed to the string literal
 */
int main()
{
    // Define a character array for a modifiable string
    char arr[] = "this is IT 355!";

    // Modify the string stored in the character array
    arr[0] = 'T';

    // Print the modified string
    std::cout << arr << "\n";

    return 0;
}