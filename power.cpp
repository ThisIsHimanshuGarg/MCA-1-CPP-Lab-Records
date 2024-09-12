#include <iostream>
using namespace std;
int FindPower(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return (x * FindPower(x, y - 1));
}
int main()
{
    int x = 3, y = 5;
    cout << x << " raised to the power " << y << " is " << FindPower(x, y);
    return 0;
}
