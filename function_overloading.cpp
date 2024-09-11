#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}
int main()
{
    cout << "sum of integer" << add(5, 3) << endl;
    cout << "sum of double" << add(2.5, 4.7);
    return 0;
}