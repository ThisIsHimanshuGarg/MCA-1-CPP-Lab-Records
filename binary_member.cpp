#include <iostream>
using namespace std;
class abc
{
public:
    int a, b, c;
    void input()
    {
        a = 10;
        b = 20;
    }
    void operator+(abc &obj)
    {
        c = a + b;
    }
    void display()
    {
        cout << c;
    }
};
int main()
{
    abc obj;
    obj.input();
    opertor + (obj);
    obj.display();
}