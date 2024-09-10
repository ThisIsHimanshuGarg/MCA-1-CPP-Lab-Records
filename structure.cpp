#include <iostream>
using namespace std;
class student
{
private:
    char name[30];
    int age;

public:
    void getdata();
    void display()
    {
        cout << "name=" << name << endl;
        cout << "age=" << age;
    }
};
void student ::getdata()
{
    cout << "enter the name and age of student";
    cin >> name;
    cin >> age;
}
int main()
{
    student obj1;
    obj1.getdata();
    obj1.display();
    return 0;
}