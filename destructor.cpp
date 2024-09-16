#include <iostream>
using namespace std;
int count = 0;
class abc
{
public:
    abc()
    {
        count++;
        cout << "no of object created" << count << endl;
    }
    ~abc()
    {
        cout << "no of objected created destructor" << count << endl;
        count--;
    }
};
int main()
{
    cout << "enter main" << endl;
    abc t1, t2, t3, t4;
    {
        cout << "enter in block 1" << endl;
        abc t5;
    }
    {
        cout << "enter in block2" << endl;
        abc t6;
    }
    cout << "re-enter in main block" << endl;
    return 0;
}