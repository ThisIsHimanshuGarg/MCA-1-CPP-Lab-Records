#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int product = 1;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of array elements is: " << sum << endl;
    cout << "Product of array elements is: " << product;
    return 0;
}
