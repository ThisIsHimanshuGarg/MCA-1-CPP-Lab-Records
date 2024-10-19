#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
        {
            cout << arr[i];
            break;
        }
    }
}