#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::string> students = {"Alice", "Bob", "Charlie", "David", "Eve"};

    std::sort(students.begin(), students.end());

    std::cout << "Sorted list of students:" << std::endl;
    for (const auto &student : students)
    {
        std::cout << student << std::endl;
    }

    return 0;
}