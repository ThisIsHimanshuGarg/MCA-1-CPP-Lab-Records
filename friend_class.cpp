#include <iostream>
using namespace std;
class abc
{
private:
    int a;
    int getdata()
    {
        return a = 10;
    }
    friend class abcd;
};
class abcd
{
public:
    void display(abc t)
    {
        cout << t.getdata();
    }
};
int main()
{
    abc ta;
    abcd obj;
    obj.display(ta);
    return 0;
}