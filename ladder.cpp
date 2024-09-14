#include <iostream>
using namespace std;
int main()
{
    int unit;
    cout << "input the units";
    cin >> unit;
    if (unit <= 100)
    {

        cout << "no charges=";
    }
    else if (unit > 100 && unit <= 200)
    {
        unit = unit * 10;
        cout << "charges=" << unit;
    }
    else
    {
        unit = unit * 12;
        cout << "charges=" << unit;
    }
    return 0;
}