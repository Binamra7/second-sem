// Write a recursive c++ program to print the Fibonacci series of Nth number.

#include <iostream>
using namespace std;

int a=0, b=1, c;

void fib(int n)
{
    if(n>0)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
        fib(n-1);
    }
}

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    fib(n);
    return 0;
}