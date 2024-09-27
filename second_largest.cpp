// second largest number in an __ARRAY_OPERATORS

#include <iostream>
using namespace std;
int findSecondLargest(int arr[], int n)
{
    if (n < 2)
    {
        cout << "Array should have at least two elements" << endl;
        return -1;
    }

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
    {
        cout << "There is no second largest element" << endl;
        return -1;
    }

    return second;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findSecondLargest(arr, n);
    if (result != -1)
    {
        cout << "The second largest element is " << result << endl;
    }
    return 0;
}