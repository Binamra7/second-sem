#include <iostream>

using namespace std;

int a, b;

int &Greater()
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Greater() = 0;
    cout << "a = " << a << endl
         << "b = " << b;
    return 0;
}