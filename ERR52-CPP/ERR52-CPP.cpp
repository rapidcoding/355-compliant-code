#include <iostream>
#include <stdexcept>

/**
 *@brief Program that utilizes two try catch statements to show how to cleanly catch an exception
 *This safely follows rule ERR52-CPP as we are purposely using try catch statements as opposed to setjmp() or longjmp()
 */
int main()
{
    // Here there is no exception so it will print normally however we still use a try catch statement to catch the possibility of an exception
    try
    {
        std::cout << "This will print as long as no error occurs\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }

    // Here we have purposely thrown an exception to show how it can be caught safely
    try
    {
        throw std::runtime_error("An exception occurred");
        std::cout << "This will not be printed as we purposely threw an exception"
                  << "\n";
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }

    return 0;
}
