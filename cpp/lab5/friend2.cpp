#include <iostream>

using namespace std;

class first
{
    int data1;

public:
    void getData(int x)
    {
        data1 = x;
    }
    friend class second;
};

class second
{
public:
    void func1(first a)
    {
        cout << "data1= " << a.data1 << endl;
    }
    void func2(first a)
    {
        cout << "data1= " << a.data1 << endl;
    }
};

int main()
{
    first a;
    second b;
    a.getData(15);
    b.func1(a);
    b.func2(a);
    return 0;
}