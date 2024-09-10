#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    a = 30;
    b = 89;
    c = a;
    a = b;
    b = c;
    cout << "swap a=" << a << endl;
    cout << "swap b=" << b;
    return 0;
}