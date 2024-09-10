#include <iostream>
using namespace std;
int main()
{
    int n, max;
    cout << "enter the number 1:";
    cin >> max;
    for (int i = 2; i <= 10; i++)
    {
        cout << "enter the number " << i << ":";
        cin >> n;
        max = (n > max) ? n : max;
    }
    cout << "largest number:" << max << endl;
    return 0;
}