#include <iostream>

void add(int *a, int *b, int *result)
{
    *result = *a + *b;
}

int main()
{
    int num1 = 5;
    int num2 = 10;
    int sum = 0;

    add(&num1, &num2, &sum);

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}