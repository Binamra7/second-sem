/*
. Create a class Add with the data length and breadth. Create constructor for those data and
display the result of sum of area of two rectangles (finding the area of two rectangles
separately and sum the area). Also create destructor.
*/

#include <iostream>

using namespace std;

class Add
{
    int length, breadth;

public:
    Add(int l, int b)
    {
        cout << "//Constructor is called" << endl;
        length = l;
        breadth = b;
    }
    ~Add()
    {
        cout << "//Destructor is called" << endl;
    }
    void display(Add a1, Add a2)
    {
        cout << "The sum of area= " << (a1.length * a1.breadth + a2.length * a2.breadth);
        cout << endl;
    }
};

int main()
{
    Add r1(5, 6);
    Add r2(4, 3);
    r1.display(r1, r2);
    return 0;
}