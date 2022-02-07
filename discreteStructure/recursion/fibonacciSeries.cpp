#include <iostream>

using namespace std;

int a = 0, b = 1, c;

void fib(int n)
{
    cout << a << " ";
    if (n > 1)
    {
        c = a + b;
        a = b;
        b = c;
        fib(n - 1);
    }
}

int main()
{
    cout << "Enter the number of terms: ";
    int n;
    cin >> n;
    fib(n);
    return 0;
}