// Write a program using overloaded function named area() that can be used to compute the area of triangle, rectangle as well as circle.
#include <iostream>
#include <cmath>

using namespace std;

// area of circle
float area(float r)
{
    return 3.14 * r * r;
}

// area of triangle
float area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// area of rectangle
float area(float a, float b)
{
    return a * b;
}

int main()
{
    float circle, triangle, rectangle;
    circle = area(5);
    triangle = area(5, 6, 7);
    rectangle = area(5, 6);
    cout << "Area of circle = " << circle << endl;
    cout << "Area of triangle = " << triangle << endl;
    cout << "Area of rectangle = " << rectangle << endl;
    return 0;
}