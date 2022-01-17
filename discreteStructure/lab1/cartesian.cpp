#include <iostream>

using namespace std;

int main()
{
    int a[10], b[10], n, m;
    cout << "Enter the size of set A:";
    cin >> n;
    cout << "Enter the elements of set A:";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the elements of set B:";
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> b[i];

    // cartesian product
    cout << "AXB={ ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "(" << a[i] << ", " << b[j] << ") ";
            if (i != n - 1 or j != m - 1)
                cout << ", ";
        }
    }
    cout << "}";
    return 0;
}