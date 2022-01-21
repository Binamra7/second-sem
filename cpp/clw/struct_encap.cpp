#include <iostream>

using namespace std;

struct calc_area
{
    int length;
    int breadth;
    int area;

    void input()
    {
        cout << "Enter the length and breadth of the rectangle: ";
        cin >> length >> breadth;
    }

    void display()
    {
        cout << "The area of the rectangle is: " << area << endl;
    }

    void calculate(calc_area a)
    {
        area = a.length * a.breadth;
    }
};

int main()
{
    calc_area a1;
    a1.input();
    a1.calculate(a1);
    a1.display();
    return 0;
}