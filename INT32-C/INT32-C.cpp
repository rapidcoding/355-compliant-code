#include <iostream>
#include <limits>

/**
 *@brief This function adds two positive signed integers
 *This follows rule INT32-C as we are checking if the addition will overflow with std::numeric_limits
 *
 *@param num1 and num2 which are both signed integers
 *
 *@return an integer that is either the sum of num1 and num2 if it will not overflow otherwise it will return -1
 */
int add_safely(int num1, int num2)
{
    // Check if the addition will overflow
    if ((num2 > 0 && num1 > std::numeric_limits<int>::max() - num2) ||
        (num2 < 0 && num1 < std::numeric_limits<int>::min() - num2))
    {
        // Report error by returning -1 if it overflows
        return -1;
    }
    else
    {
        // Preform the addition safely if it will not overflow
        return num1 + num2;
    }
}

/**
 *@brief This program calls the add_safely function twice to ensure that it is working correctly and to see if it avoids overflowing the integer
 */
int main()
{
    // Test that the function works correctly
    int result = add_safely(100, 200);

    if (result != -1)
    {
        std::cout << "Result: " << result << std::endl;
    }
    else
    {
        std::cerr << "Error: Addition would overflow." << std::endl;
    }

    // Test that the catch works if we try to overflow addition
    int output = add_safely(2000000000, 2000000000);

    if (output != -1)
    {
        std::cout << "Result: " << output << std::endl;
    }
    else
    {
        std::cerr << "Error: Addition would overflow." << std::endl;
    }

    return 0;
}
