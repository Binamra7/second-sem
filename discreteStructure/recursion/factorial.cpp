#include <iostream>

using namespace std;

long long int factorial(int n)
{
    if (n == 1 or n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}