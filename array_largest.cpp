#include <iostream>
using namespace std;
int main()
{
    int largest = 0;
    int smallest;
    int number[5];
    int i, d, c;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the number " << i << ": ";
        cin >> number[i];
    }
    for (i = 0; i < 5; i++)
    {
        if (number[i] > largest)
        {
            largest = number[i];
            c = i;
        }
        smallest = number[0];
        if (number[i] < smallest)
        {
            smallest = number[i];
            d = i;
        }
    }
    cout << largest << "index of largest=" << c << endl;
    cout << smallest << "index of smallest=" << d;
    return 0;
}