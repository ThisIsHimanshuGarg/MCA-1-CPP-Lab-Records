#include <iostream>
using namespace std;
class test
{
public:
    int x;
    test()
    {
        cout << "default constructor" << endl;
    }
    test(int a)
    {
        x = a;
    }
    test(test &obj)
    {
        x = obj.x;
    }
};

int main()
{
    test obj1(5);
    test obj2(obj1);
    cout << obj2.x;
    return 0;
}