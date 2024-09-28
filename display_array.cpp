#include <iostream>

int main()
{
    const int x = 2, y = 2, z = 2;
    int array[x][y][z];

    // Reading the array
    std::cout << "Enter 8 elements for a 2x2x2 array:" << std::endl;
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            for (int k = 0; k < z; ++k)
            {
                std::cin >> array[i][j][k];
            }
        }
    }

    // Displaying the array
    std::cout << "The 2x2x2 array is:" << std::endl;
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            for (int k = 0; k < z; ++k)
            {
                std::cout << "array[" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << std::endl;
            }
        }
    }

    return 0;
}