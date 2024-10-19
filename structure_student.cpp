#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int age;
    float gpa;
};

void displayStudent(const Student &student)
{
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Age: " << student.age << std::endl;
    std::cout << "GPA: " << student.gpa << std::endl;
}

int main()
{
    Student student;

    std::cout << "Enter student's name: ";
    std::getline(std::cin, student.name);

    std::cout << "Enter student's age: ";
    std::cin >> student.age;

    std::cout << "Enter student's GPA: ";
    std::cin >> student.gpa;

    std::cout << "\nStudent Information:\n";
    displayStudent(student);

    return 0;
}