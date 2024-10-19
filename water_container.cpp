#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int w, i, j, area, mw = 0, ht;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            w = j - i;
            ht = min(arr[i], arr[j]);
            area = w * ht;
            mw = max(mw, area);
        }
    }
    cout << mw << endl;
}