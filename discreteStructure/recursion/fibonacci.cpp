#include <iostream>

using namespace std;

long long int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2 or n == 3)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th fibonacci number = " << fib(n);
}