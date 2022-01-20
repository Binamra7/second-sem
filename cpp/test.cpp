// Write a program to swap two numbers using function.

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swap(&a, &b);
    cout << "After swapping: " << a << " " << b << endl;
    return 0;
}