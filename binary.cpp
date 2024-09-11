#include <iostream>
using namespace std;
int main()
{
    int n, binary = 0, i = 1;
    cout << "enter the decimal number:";
    cin >> n;
    while (n > 0)
    {
        binary += (n % 2) * i;
        n /= 2;
        i *= 10;
    }
    cout << "binary equivalent:" << binary << endl;
    return 0;
}