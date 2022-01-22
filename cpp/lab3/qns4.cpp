#include <iostream>
using namespace std;

int &high();
int x, y;

int main()
{
    int hi = 100;
    cout << "enter two temperatures: " << endl;
    cin >> x >> y;
    high() = hi;
    if (x == 100)
        cout << "Higher temperature = " << x << endl
             << "Lower temperature = " << y;
    else if (y == 100)
        cout
            << "Lower temperature = " << x
            << endl
            << "Higher temperature = " << y;
}

int &high()
{
    if (x > y)
        return x;
    else if (x < y)
        return y;
    else
        cout << "equal temperature.";
    return x;
}