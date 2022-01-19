// Write a inline function to calculate the area of circle

#include <iostream>

using namespace std;

inline float area(float r)
{
    return 3.14 * r * r;
}

int main()
{
    int n;
    cout << "Enter the radius of the circle:" << endl;
    cin >> n;
    cout << "Area of Circle= " << area(n) << endl;
    return 0;
}