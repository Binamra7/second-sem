#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    cout << "Enter a number:" << endl;
    cin >> n;
    if (n == 1)
        cout << "1 is neither prime nor composite";
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                c++;
        }
        if (c >= 1)
            cout << n << " is composite";
        else
            cout << n << " is prime";
    }
    return 0;
}