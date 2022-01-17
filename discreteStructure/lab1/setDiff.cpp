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
    cout << "Enter the size of set B:";
    cin >> m;
    cout << "Enter the elements of set B:";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    // difference
    int c;
    cout << "A-B={ ";
    for (int i = 0; i < n; i++)
    {
        c = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
                c++;
        }
        if (c == 0)
            cout << a[i] << " ";
    }
    cout << "}";
    return 0;
}