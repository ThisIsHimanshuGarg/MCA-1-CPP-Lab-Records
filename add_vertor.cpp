#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Define the input vectors

    vector<int> v1 = {10, 30, 40};
    vector<int> v2 = {20, 50, 60};

    // Print the original vectors
    cout << "Vector 1:";
    for (int num : v1)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "Vector 2:";
    for (int num : v2)
    {
        cout << num << " ";
    }
    cout << endl;

    // intialize a vector to accomodate elememnts from both
    // vectors

    vector<int> merged(v1.size() + v2.size());

    // Merge the vectors using the merge function

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(),
          merged.begin());

    // Print the merged vector
    cout << "Merged Vector:";
    for (int num : merged)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
