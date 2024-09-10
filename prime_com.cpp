#include <iostream>
using namespace std;
int main()
{
    int i, n, a, prime = 0;
    cout << "\nEnter the number:";
    cin >> i;
    for (n = 2; n < i; n++)
    {
        if (i % n == 0)
        {
            prime++;
        }
    }
    if (prime == 0)
    {
        cout << "\nThis number is Prime";
    }
    else
    {
        cout << "\nThis number is Composite";
    }
    return 0;
}