#include <iostream>
#include <string>

/**
 *@brief Function that checks if a constant character pointer is empty or not
 *This safely follows the rule STR51-CPP as it immediately checks if the constant char is nullptr or not which ensures that we won't call a function with it such as length()
 *
 *@param validStr which is a pointer to a constant character which we will try to turn into a string
 */
void isEmpty(const char *validStr)
{
    if (validStr != nullptr)
    {
        std::string mystr(validStr);
        if (!mystr.empty())
        {
            std::cout << "String is not empty: " << mystr << "\n";
        }
        else
        {
            std::cout << "String is empty.\n";
        }
    }
    else
    {
        std::cout << "Invalid string pointer."
                  << "\n";
    }
}

/**
 *@brief This program creates two calls to isEmpty() which will check if a string can be created from the constant character
 */
int main()
{
    // Test that our function is working correctly
    isEmpty("IT 355 is awesome!");

    // Test that nullptr is being caught ensuring that we won't call functions such as length() will a nullptr
    isEmpty(nullptr);
    return 0;
}