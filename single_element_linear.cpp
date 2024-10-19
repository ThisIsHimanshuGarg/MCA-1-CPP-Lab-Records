#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < 8; i++)
    {
        if (arr[i - 1] != arr[i] && arr[i + 1] != arr[i])
        {
            cout << arr[i] << endl;
        }
    }
}