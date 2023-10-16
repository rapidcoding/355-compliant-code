#include <string>
#include <iostream>

/**
 *@brief Function to convert all spaces to underscores in a text such as an email
 *This safely follows the rule STR52-CPP as we are using a range based loop which avoids explicit iterators or references to characters
 */
int main()
{
    std::string emailBefore = "example email test@gmail.com";
    std::string emailAfter;

    std::cout << emailBefore << " is the example email with spaces\n";

    // Safely iterate through a string
    for (char c : emailBefore)
    {
        emailAfter.push_back(c != ' ' ? c : '_');
    }

    std::cout << emailAfter << " is the example email after safely converting the spaces\n";
    return 0;
}
