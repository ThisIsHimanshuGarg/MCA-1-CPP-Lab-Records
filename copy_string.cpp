#include <iostream>
#include <cstring>

int main()
{
    const char *original = "Hello, World!";
    size_t length = std::strlen(original) + 1; // +1 for the null terminator

    char *copy = new char[length];
    std::strcpy(copy, original);

    std::cout << "Original: " << original << std::endl;
    std::cout << "Copy: " << copy << std::endl;

    delete[] copy;
    return 0;
}