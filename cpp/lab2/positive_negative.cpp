#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    if (n > 0)
        cout << n << " is positve";
    else if (n < 0)
        cout << n << " is negative";
    else
        cout << "It is zero";
    return 0;
}