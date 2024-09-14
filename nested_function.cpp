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
    void calculation()
    {
        c = a + b;
    }
    void show()
    {
        calculation();
        cout << c;
    }
};
int main()
{
    abc obj;
    obj.getdata();
    obj.show();
}