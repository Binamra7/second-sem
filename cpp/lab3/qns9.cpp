// Write a program to set a structure to hold feet and inches, assign values to the members of the structure and print out the values in the format 4’ 10” by function. Pass the structure to the function. [Note: if inch is greater than 12, covert it into feet]

#include <iostream>
using namespace std;

struct height
{
    int feet, inches;
};

void display(height h)
{
    if (h.inches > 12)
    {
        h.feet = h.feet + (h.inches / 12);
        h.inches = h.inches % 12;
    }
    cout << "The height is:" << endl;
    cout << h.feet << "'" << h.inches << "\"" << endl;
}

int main()
{
    cout << "Enter the height in feet and inches " << endl;
    height h;
    cin >> h.feet >> h.inches;
    display(h);
    return 0;
}