#include <iostream>
#include <chrono>

using namespace std;

long long int findEvenSum(int n)
{
    if (n % 2 != 0)
        n--;
    if (n == 0)
        return 0;
    return n + findEvenSum(n - 2);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The sum of even numbers = " << findEvenSum(n);
    return 0;
}