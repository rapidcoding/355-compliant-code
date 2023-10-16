#include <stdexcept>
#include <string>
#include <iostream>

/**
 *@brief Program that attempts to locate the character at index 2 of a string and changes that character to a 0 then tries to change a character that is out of range
 *This safely follows the rule STR53-CPP as we a using a try catch statement to ensure we are in the range of the string
 */
int main()
{
    std::string text = "0123456789";

    // Attempt to change the number at index 2 to character 0
    try
    {

        std::cout << text << " is the text before safely modifying the text\n";

        // Use std::string::at() for safe element access
        text.at(2) = '0'; // Modify the character at the specified index

        std::cout << text << " is the text after safely modifying the text\n";
    }
    catch (std::out_of_range &ex)
    {
        // Handle the out-of-range error here
        std::cerr << "Out-of-range error: " << ex.what() << "\n";
    }

    // Attempt to change the number at index 15 to character 0 which is out of bounds
    try
    {

        std::cout << text << " is the text before safely modifying the text\n";

        // Use std::string::at() for safe element access
        text.at(15) = '1'; // Modify the character at the specified index

        // This text will not be seen at index 15 is out of range
        std::cout << text << " is the text after safely modifying the text\n";
    }
    catch (std::out_of_range &ex)
    {
        // Handle the out-of-range error here
        std::cerr << "Out-of-range error: " << ex.what() << "\n";
    }
    return 0;
}
