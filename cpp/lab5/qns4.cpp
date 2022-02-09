/*
Create a class named 'Rectangle' with two data members- length and breadth and a function to
calculate the area which is 'length*breadth'. The class has three constructors which are :
1 -having no parameter - values of both length and breadth are assigned zero.
2-having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
3 -having one number as parameter - both length and breadth are assigned that number. Now, create
objects of the 'Rectangle' class having none, one and two parameters and print their areas.
*/

#include <iostream>

using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle()
    {
        length = breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(int l)
    {
        length = breadth = l;
    }
    void calc()
    {
        cout << "Area of rectangle is: " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r1, r2(10, 20), r3(30);
    r1.calc();
    r2.calc();
    r3.calc();
    return 0;
}