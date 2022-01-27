#include <iostream>

using namespace std;

int zeroSmaller(int &x, int &y)
{
    if (x < y)
        return x;

    else
        return y;
}

int main()
{
    int a, b, z;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    zeroSmaller(a, b);

    z = 0;
    cout << "The x number is: " << a << endl
         << "The y number is: " << b;

    return 0;
}
