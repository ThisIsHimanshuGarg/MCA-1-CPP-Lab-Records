#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 10;
    b = 15;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "swap a=" << a;
    cout << "swap b=" << b;
    return 0;
}