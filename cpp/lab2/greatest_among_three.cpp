#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the three numbers:" << endl;
    cin >> a >> b >> c;
    if (a > b and a > c)
        cout << a << " is greatest";
    else if (b > a and b > c)
        cout << b << " is greatest";
    else
        cout << c << " is greatest";

    cout << endl;

    if (a < b and a < c)
        cout << a << " is smallest";
    else if (b < a and b < c)
        cout << b << " is smallest";
    else
        cout << c << " is smallest";
    return 0;
}