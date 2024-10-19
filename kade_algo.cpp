#include <iostream>
using namespace std;
int main()
{
    int n[5] = {1, -2, -3, 4, 5};
    int current_sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i <= 5; i++)
    {
        current_sum += n[i];
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    cout << "Maximum sum is: " << max_sum << endl;
}