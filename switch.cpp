#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "input the problem number";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "eletricity problem";
        break;
    case 2:
        cout << "water problem";
        break;
    case 3:
        cout << "network problem";
        break;
    default:
        cout << "does not match";
    }
    return 0;
}