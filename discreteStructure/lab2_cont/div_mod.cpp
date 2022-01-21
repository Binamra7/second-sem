#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, d;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter d: ";
    cin >> d;

    int q = 0;
    int r = abs(a);

    while (r >= d)
    {
        r = r - d;
        q++;
    }

    if (a < 0 and r < 0)
    {
        r = d - r;
        q = q - 1;
    }

    cout << "Quotient= " << q << endl;
    cout << "Remainder= " << r << endl;

    return 0;
}