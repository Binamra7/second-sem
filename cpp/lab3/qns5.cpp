// Create a structure and pass this by reference to a function scale() and calculate the
//  distance by using scaling factor. Display the distance in feet and inches using display()
//  function. Write a main() program to exercise this function.

#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    int inches;
};

void display(Distance d)
{
    cout << d.feet << " feet " << d.inches << " inches" << endl;
}

void convert(Distance &d)
{
    // d.inches += 12;
    d.feet += d.inches / 12;
    d.inches %= 12;
    display(d);
}

// void scale(Distance &d, int scale_fac)
// {
//     d.feet = d.feet * scale_fac;
//     d.inches = d.inches * scale_fac;
//     convert(d);
// }

int main()
{
    // int scaling_factor = 5;
    Distance d;
    // d = {5, 25};
    int f, i;
    cout << "Enter feet and inches: ";
    cin >> f >> i;
    d.feet = f;
    d.inches = i;
    // cout << "Distance before scaling: ";
    // scale(d, scaling_factor);
    convert(d);
    return 0;
}