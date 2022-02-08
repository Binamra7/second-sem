#include <iostream>
#include <chrono>
using namespace std::chrono;

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
    auto start = high_resolution_clock::now();
    cout << "The sum of even numbers = " << findEvenSum(n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << endl
         << duration.count();
    return 0;
}