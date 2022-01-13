#include <iostream>

using namespace std;

int main()
{
    int n, m, arm = 0, r;
    cout << "Enter a number:" << endl;
    cin >> n;
    m = n;
    while (n)
    {
        r = n % 10;
        arm = arm + r * r * r;
        n = n / 10;
    }
    if (arm == m)
        cout << m << " is armstrong";
    else
        cout << m << " is not armstrong";
    return 0;
}