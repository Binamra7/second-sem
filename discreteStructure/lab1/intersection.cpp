#include <iostream>

using namespace std;

int main()
{
    int a[10], b[10], n, m;
    cout << "Enter the size of set A:";
    cin >> n;
    cout << "Enter the elements of set A:" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the size of set B:";
    cin >> m;
    cout << "Enter the elements of set B:" << endl;
    for (int i = 0; i < m; i++)
        cin >> b[i];
    cout << "AnB={ ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
            }
        }
    }
    cout << "}";
    return 0;
}