#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> lines;
    std::string line;
    int n;

    std::cout << "Enter the number of lines to display starting from the nth line: ";
    std::cin >> n;
    std::cin.ignore(); // To ignore the newline character after the integer input

    std::cout << "Enter multiple lines of text (type 'END' to stop):" << std::endl;
    while (std::getline(std::cin, line))
    {
        if (line == "END")
            break;
        lines.push_back(line);
    }

    if (n > 0 && n <= lines.size())
    {
        std::cout << "Displaying lines starting from line " << n << ":" << std::endl;
        for (size_t i = n - 1; i < lines.size(); ++i)
        {
            std::cout << lines[i] << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid line number." << std::endl;
    }

    return 0;
}
