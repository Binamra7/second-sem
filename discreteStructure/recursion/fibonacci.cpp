#include <iostream>

using namespace std;

long long int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 2 or n == 1)
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
// 1 2 3 4 5 6
// 0 1 1 2 3 5