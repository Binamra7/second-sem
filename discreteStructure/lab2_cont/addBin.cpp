#include <iostream>

using namespace std;

int main()
{               // c   1         
    // int a[4] = a{1, 0, 1, 1}, b[4] = {1, 1, 1, 0}, s[5];
    //            b{1, 1, 1, 0};
    //         s{1, 1, 1, 0, 1};
    // 10
    // 10
    //100

    int a[10], b[10], s[11];
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    // int n = 4;
    int d, c = 0;
    for (int j = n - 1; j >= 0; j--)
    {
        d = (a[j] + b[j] + c) / 2;
        s[j] = a[j] + b[j] + c - 2 * d;
        c = d;
    }
    s[n] = c;
    for (int i = n; i >= 0; i--)
    {
        cout << s[i] << " ";
    }
    return 0;
}