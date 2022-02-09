// Write a program in C++ for constructor overloading to find the sum of two distances having
// feet and inch as the private data. Use constructor without paramer is initialized with 0 &
// other constructor having two different int values.

#include <iostream>

using namespace std;

class Distance
{

    int inch, feet;

public:
    Distance()
    {
        feet = inch = 0;
    }

    Distance(int f, int i)
    {
        inch = i;
        feet = f;
    }
    void Add(Distance x)
    {
        inch += x.inch;
        feet += x.feet;
        if (inch >= 12)
        {
            feet += inch / 12;
            inch = inch % 12;
        }
    }
    void display()
    {
        cout << feet << "'" << inch << "\"";
    }
};

int main()
{
    Distance d1;
    Distance d2(5, 6);
    Distance d3(4, 10);
    d2.Add(d3);
    d2.display();
    return 0;
}