#include <iostream>
using namespace std;
class abc
{
public:
    int x, y;
    abc(int a, int b)
    {
        x = a;
        y = b;
    }
    int display()
    {
        return x + y;
    }
};
int main()
{
    abc obj(12, 13);
    int c = obj.display();
    cout << c;
    return 0;
}