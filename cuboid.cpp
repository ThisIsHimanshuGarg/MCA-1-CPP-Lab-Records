#include <iostream>
using namespace std;
float cuboid(int l, int b, int h = 1)
{
    float volume = l * b * h;
    return volume;
}
int main()
{
    int l, b;
    cout << "enter the length and breadth of cuboid";
    cin >> l >> b;
    cout << "volume of cuboid" << cuboid(l, b);
}