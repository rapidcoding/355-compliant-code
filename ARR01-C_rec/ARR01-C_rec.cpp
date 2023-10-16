#include <iostream>
#include <cstddef>

/**
 *@brief Function that takes in an array and it's size explicitly and sets all values in array to 0
 *This follow the recommendation ARR01-C because we ask for the size of the array explicilty through a parameter as opposed to using the sizeof operator
 *
 *@param array which is the array declared in main
 *
 *@param len which is the explicitly calculated size of the array
 */
void clear(int array[], size_t len)
{
    for (size_t i = 0; i < len; i++)
    {
        array[i] = 0;
    }
}

/**
 *@brief Program that declares an array, calls a function to set all elements of the array to 0, and prints the elements of the array
 *We explicitly hold the size of the array in the variable arrSize to avoid the use of the sizeof operator
 */
int main()
{
    const size_t arrSize = 12; // Specify the size of the array
    int dis[arrSize];          // Declare an integer array of the specified size

    // Call the clear function, passing the array and its size explicitly
    clear(dis, arrSize);

    // Print the elements of the array to verify they are cleared
    for (size_t i = 0; i < arrSize; i++)
    {
        std::cout << dis[i] << ' ';
    }

    std::cout << "\n";

    return 0;
}
