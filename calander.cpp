#include <iostream>
using namespace std;
int main()
{
    int start, days;
    cout << "enter the start day of the month(1-7)";
    cin >> start;
    cout << "enter the number of days in the month:";
    cin >> days;
    cout << "sun\t mon\t tue\t wed\t thu\t fri\t sat\n";
    for (int i = 1; i < start; i++)
    {
        cout << "\t";
    }
    for (int i = 1; i <= days; i++)
    {
        cout << i << "\t";

        if ((i + start - 1) % 7 == 0)

            cout << endl;
    }
    return 0;
}