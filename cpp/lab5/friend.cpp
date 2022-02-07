#include <iostream>

using namespace std;

class first;
class second
{
    int data2;

public:
    void setData(int x)
    {
        data2 = x;
    }
    friend int sum(first a, second b);
};

class first
{
    int data1;

public:
    void setData(int x)
    {
        data1 = x;
    }
    friend int sum(first a, second b);
};

int sum(first a, second b)
{
    return a.data1 + b.data2;
}

int main()
{
    first f;
    second s;
    f.setData(10);
    s.setData(15);
    cout << "The sum= " << sum(f, s);
    return 0;
}