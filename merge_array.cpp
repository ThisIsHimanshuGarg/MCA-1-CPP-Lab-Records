#include <iostream>
#include <vector>
#include <algorithm>

void mergeArrays(const std::vector<int> &arr1, const std::vector<int> &arr2, std::vector<int> &mergedArray)
{
    mergedArray = arr1;
    mergedArray.insert(mergedArray.end(), arr2.begin(), arr2.end());
    std::sort(mergedArray.begin(), mergedArray.end());
}

int main()
{
    std::vector<int> arr1 = {3, 1, 4, 7, 5};
    std::vector<int> arr2 = {2, 6, 8, 0, 9};
    std::vector<int> mergedArray;

    mergeArrays(arr1, arr2, mergedArray);

    std::cout << "Merged and sorted array: ";
    for (int num : mergedArray)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}