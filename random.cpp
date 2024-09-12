#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    const int SIZE = sizeof(numbers) / sizeof(numbers[0]);
    srand(time(0));

    int randomIndex = rand() % SIZE;

    cout << "Random number from the array: " << numbers[randomIndex] << endl;

    return 0;
}
