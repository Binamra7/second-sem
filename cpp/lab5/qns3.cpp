// Create a class named Test and perform class test for assigning values and copy constructor
// and needed function for display. Use copy constructor to pass two values code and price.
#include <iostream>

using namespace std;

class Test
{
    int code;
    float price;

public:
    Test(int c, float p)
    {
        code = c;
        price = p;
    }
    Test(Test &t)
    {
        code = t.code;
        price = t.price;
    }
    void display()
    {
        cout << "Code: " << code << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Test t1(2, 100.0);
    cout << "t1 data" << endl;
    t1.display();
    Test t2 = t1;
    cout << endl;
    cout << "t2 data:" << endl;
    t2.display();
    return 0;
}