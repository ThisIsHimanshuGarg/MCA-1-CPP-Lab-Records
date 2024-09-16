#include <iostream>
using namespace std;
class abc
{
private:
    int a = 5;
    int b = 6;

public:
    abc()
    {
        int c = a + b;
        cout << c;
    }
};
int main()
{
    abc obj1;
    return 0;
}