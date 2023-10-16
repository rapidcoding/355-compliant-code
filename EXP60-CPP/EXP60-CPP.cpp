/**
 *@brief Incorporating the header file with the cpp file ensures that both files are getting the same exact compiler
 */
#include "EXP60-CPP.h"
#include <iostream>

/**
 *@brief This function prints out the object's data
 *
 *@param obj which is a standard layout object
 */
void processStandardLayoutObject(StandardLayout &obj)
{
    std::cout << "Processing StandardLayout object. Data: " << obj.data << std::endl;
}

/**
 *@brief This function creates an object with the standard layout type and calls the function processStandardLayoutObject to print the data of the object
 *This follows rule EXP60-CPP as we are ensuring that a standard layout type is being passed between execution boundaries and everything is being compiled together
 */
int main()
{
    StandardLayout obj;
    obj.data = 123456789;
    processStandardLayoutObject(obj);
    return 0;
}