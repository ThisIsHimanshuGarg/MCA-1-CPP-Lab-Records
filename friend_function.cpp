#include <iostream>
using namespace std;
class abc
{
private:
    int a, b, c;

public:
    void getdata()
    {
        a = 10;
        b = 20;
    }
    friend void display(abc s);
};
void display(abc s)
{
    s.c = s.a + s.b;
    cout << s.c;
}
int main()
{
    abc obj;
    obj.getdata();
    display(obj);
    return 0;
}