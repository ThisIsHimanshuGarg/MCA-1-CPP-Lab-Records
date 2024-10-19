#include <iostream>
using namespace std;
class abc
{
private:
    int a = 10, b = -20, c = 30;

public:
    void display()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }
};
int main()
{
    abc obj;
    obj.display();
    -obj;
    cout << "operator overloading";
    obj.display();
}