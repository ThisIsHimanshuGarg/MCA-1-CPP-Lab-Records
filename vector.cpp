#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> s = {'a', 'b', 'c', 'd', 'e'};
    s.push_back('f');
    s.pop_back();

    for (char i : s)
    {
        cout << i << " ";
    }
    cout << s.size();
    cout << s.front();
    cout << s.back();
    cout << s.at(2);
    cout << s.capacity();
}