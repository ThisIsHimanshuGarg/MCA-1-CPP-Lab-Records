#include <iostream>
using namespace std;
class abc
{
private:
    int x;

public:
    void get(int x)
    {
        this->x = x;
    }
    void show()
    {
        cout << x;
    }
};
int main()
{
    int x = 100;
    abc obj;
    obj.get(x);
    obj.show();
    return 0;
}