#include <iostream>
using namespace std;
int main()
{
    int *p = new int{45};
    float *x = new float{45.45f};
    cout << *p << endl;
    cout << *x << endl;
    delete p;
    delete x;
    cout << *p;
    return 0;
}