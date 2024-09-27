#include <iostream>

using namespace std;

void transposeMatrix(int matrix[3][3], int transposed[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int transposed[3][3];

    transposeMatrix(matrix, transposed);

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    cout << "Transposed Matrix:" << endl;
    printMatrix(transposed);

    return 0;
}