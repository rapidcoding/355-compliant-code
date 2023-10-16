#include <iostream>
#include <limits>

/**
 *@brief This function takes takes in two numbers, a numerator and a denominator, and divides them by each other if the denominator is not zero and outputs the quotient and remainder
 *This safely follows rule INT33-C as we are ensuring that dividing by zero does not occur by using an if statement
 *
 *@param numerator which is the first number that is a part of the operation
 *
 *@param denominator which is the second number that is a part of the operation
 */
void divideAndRemainder(int numerator, int denominator)
{
    int quotient;
    int remainder;

    if (denominator == 0)
    {
        std::cerr << "Error: Divide by zero is not allowed."
                  << "\n";
    }
    else
    {
        quotient = numerator / denominator;
        remainder = numerator % denominator;

        std::cout << "Quotient: " << quotient << "\n";
        std::cout << "Remainder: " << remainder << "\n";
    }
}

/**
 *@brief This program makes two calls to the divideAndRemainder function to ensure that the function works and that it complies with the rule by avoiding dividing by zero
 */
int main()
{
    // Test that our function works
    divideAndRemainder(21, 5);

    // Test that our function catches the divide by zero case
    divideAndRemainder(10, 0);

    return 0;
}
