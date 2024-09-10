#include <iostream>
using namespace std;
int main()
{
    char c, a;
    cout << "enter any character:";
    cin >> a;
    if (isupper(a))
    {
        c = tolower(a);
        cout << "convert lower case:" << c;
    }
    else
    {
        c = toupper(a);
        cout << "convert upper case:" << c;
    }
    return 0;
}