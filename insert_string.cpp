#include <iostream>
#include <string>

int main()
{
    std::string mainText = "Hello, World!";
    std::string insertText = "Beautiful ";
    size_t position = 7; // Position to insert the string

    if (position <= mainText.size())
    {
        mainText.insert(position, insertText);
        std::cout << "Modified Text: " << mainText << std::endl;
    }
    else
    {
        std::cout << "Position is out of bounds." << std::endl;
    }

    return 0;
}