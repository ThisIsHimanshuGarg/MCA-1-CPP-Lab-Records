#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 4;
    int start = 0, end = 4;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            end = mid - 1;
        }
        else if (arr[mid] == target)
        {
            cout << "Found at index " << arr[mid] << endl;
            break;
        }
    }
    return 0;
}