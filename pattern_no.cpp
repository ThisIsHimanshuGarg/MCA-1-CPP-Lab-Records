#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l, x = 3;

    for (i = 1; i <= 4; i++)
    {
        for (j = 0; j <= x; j++)
            cout << " ";

        for (k = 1; k <= i; k++)
            cout << k;

        for (l = i - 1; l > 0; l--)
            cout << l;
        x = x - 1;
        cout << "\n";
    }
}