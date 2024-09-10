#include <iostream>
using namespace std;
int main()
{
    for (char a = 'A'; a <= 'E'; a++)
    {
        for (char b = 'A'; b <= a; b++)
        {
            cout << b;
        }
        cout << endl;
    }
}