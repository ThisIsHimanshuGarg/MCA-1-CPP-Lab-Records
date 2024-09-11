#include <iostream>
using namespace std;
float circle(int r)
{
    float area = 3.14 * r * r;
    return area;
}
int main()
{
    int r;
    cout << "enter the radius of the circle:";
    cin >> r;
    cout << "area of circle:" << circle(r);
}