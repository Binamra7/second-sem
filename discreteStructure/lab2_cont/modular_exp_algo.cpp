#include <iostream>

using namespace std;

int main()
{

    int b, n, m;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter n in binary: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;

    int temp = n;
    // cout << temp;
    int x = 1;
    int power = b % m;
    for (int i = 0; i < n; i++)
    {
        if (temp % 10 == 1)
            x = (x * power) % m;

        power = (power * power) % m;

        temp = temp / 10;
    }
    cout << "The value of x is " << x;
    return 0;
}