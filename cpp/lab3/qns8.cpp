// Write a program to set a structure to hold a date (mm, dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2020 by function. Pass the structure to the function.

#include <iostream>
using namespace std;

struct date
{
    int month, day, year;
};

void display(date d)
{
    cout << "The date is:" << endl;
    cout << d.month << "/" << d.day << "/" << d.year << endl;
}

int main()
{
    cout << "Enter the date in the format mm/dd/yyyy: " << endl;
    date d;
    cin >> d.month >> d.day >> d.year;
    display(d);
    return 0;
}