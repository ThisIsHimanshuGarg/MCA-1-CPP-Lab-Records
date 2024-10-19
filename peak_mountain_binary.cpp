#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> arr;
    int start = 0, end = 5, mid;
    for (int i = 0; i < 6; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 1; i < 5; i++)
    {
        mid = start + (end - start) / 2;
        if (arr[i - 1] < arr[mid] && arr[mid] > arr[i + 1])
        {
            cout << arr[mid];
        }
        start++;
    }
}