#include <iostream>
#include <cstring>

/**
 *@brief Program that sanitizes string data by whitelisting valid characters
 *This follows the recommendation STR02-C as we are santizing the data that we are passing through
 */
int main()
{
    // Data received from an untrusted source
    char user_data[] = "Bad char 1:} Bad char 2:{";
    std::cout << "Before sanitizing the data: " << user_data << "\n";

    // Sanitize the data
    static const char ok_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890_-.@";
    char *cp = user_data; // Cursor into the string

    while (*cp)
    {
        if (strchr(ok_chars, *cp) == nullptr)
        {
            // Replace invalid characters with an underscore
            *cp = '_';
        }
        cp++;
    }

    // Display the sanitized data
    std::cout << "After sanitizing the data: " << user_data << "\n";

    return 0;
}
