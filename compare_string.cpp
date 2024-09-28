#include <iostream>
#include <string>

int main()
{
    std::string str1, str2;

    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1);

    std::cout << "Enter the second string: ";
    std::getline(std::cin, str2);

    if (str1 == str2)
    {
        std::cout << "The strings are equal." << std::endl;
    }
    else
    {
        std::cout << "The strings are not equal." << std::endl;
    }

    return 0;
}