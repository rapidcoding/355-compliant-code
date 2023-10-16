#include <iostream>
#include <vector>
#include <algorithm>

/**
 *@brief Function that iterates through a container and outputs each element
 *This follows rule CTR55-CPP as it utilizes a for loop to ensure that the bounds of the container are not overflowed
 *Utilizing the for loop also removes the need for the additive operator
 */
int main()
{
    std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const std::vector<int>::size_type maxSize = 20;

    // Safely iterate through the container to ensure that the bounds of the container are not overflowed
    for (auto i = myVector.begin(), e = i + std::min(maxSize, myVector.size()); i != e; ++i)
    {
        std::cout << *i << std::endl;
    }
    return 0;
}