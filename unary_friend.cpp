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
    void friend operator-(abc &t);
};
void operator-(abc &t)
{
    t.a = -t.a;
    t.b = -t.b;
    t.c = -t.c;
}
int main()
{
    abc obj;
    obj.display();
    operator-(obj);
    cout << "operator overloading";
    obj.display();
}