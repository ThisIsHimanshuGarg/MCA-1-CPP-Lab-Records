#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return (a + b);
}
int main()
{
    int x;
    x = add(20, 30);
    cout << x;
    return 0;
}