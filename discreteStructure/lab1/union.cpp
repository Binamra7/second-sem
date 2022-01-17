#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a[10], b[10], u[20], m, n;
    cout << "Enter the size of first set:";
    cin >> n;
    cout << "Enter elements of set A:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the size of second set:";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        u[i] = a[i];
    }
    int index = n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] != b[i])
            {
                u[index] = b[i];
                index++;
                break;
            }
        }
    }
    cout << "AUB={";
    for (int i = 0; i < n + m; i++)
    {
        cout << u[i];
        if (i != n + m - 1)
        {
            cout << ", ";
        }
    }
    cout << "}";

    return 0;
}