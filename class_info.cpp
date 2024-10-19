#include <iostream>
#include <vector>
#include <string>

class Student
{
public:
    std::string name;
    int age;
    std::string grade;

    void displayInfo() const
    {
        std::cout << "Name: " << name << "\nAge: " << age << "\nGrade: " << grade << "\n";
    }
};

int main()
{
    int numberOfStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numberOfStudents;

    std::vector<Student> students(numberOfStudents);

    for (int i = 0; i < numberOfStudents; ++i)
    {
        std::cout << "Enter details for student " << i + 1 << " (name age grade): ";
        std::cin >> students[i].name >> students[i].age >> students[i].grade;
    }

    std::cout << "\nDisplaying student information:\n";
    for (const auto &student : students)
    {
        student.displayInfo();
        std::cout << "-------------------\n";
    }

    return 0;
}
