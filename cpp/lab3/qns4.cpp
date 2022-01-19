#include <iostream>
using namespace std;

int &high();
int x, y;

int main()
{
    int set = 0;
    cout << "enter two temperatures: " << endl;
    cin >> x >> y;
    high() = set;
    if (x == 100)
    {
        cout << "Higher temperature = " << x << endl
             << "Lower temperature = " << y;
    }
    else if (y == 100)
    {
        cout << "Higher temperature = " << y << endl
             << "Lower temperature = " << x;
    }
}

int &high()
{
    if (x > y)
    {
        return x;
    }
    else if (x < y)
    {
        return y;
    }
    else
    {
        cout << "equal temperature.";
    }
}