#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int sum = 0, num, i;
    cout << " Input the value for nth term: ";
    cin >> num;

    for (i = 1; i <= num; ++i)
    {
        sum += (pow(i, i) / i);
    }

    cout << " The sum of the above series is: " << sum << endl;

    return 0;
}
