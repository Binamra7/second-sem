#include <iostream>

using namespace std;

long long int findSum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + findSum(n - 1);
}

int main()
{
    cout << "Enter the number:";
    int n;
    cin >> n;
    cout << "The sum of " << n << " natural numbers = " << findSum(n);
    return 0;
}