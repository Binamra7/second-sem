#include <iostream>

using namespace std;

int main()
{
    // bool p, q, y, z;
    // cout << "Enter p: ";
    // cin >> p;
    // cout << "Enter q: ";
    // cin >> q;

    // // conditional
    // if (p == 0 and q == 1)
    // {
    //     y = 0;
    // }
    // else
    //     y = 1;
    // cout<<"y="<<y<<endl;

    // // biconditional
    // if (p == q)
    // {
    //     z = 1;
    // }
    // else
    //     z = 0;
    // cout<<"z="<<z<<endl;

    char p[4] = {'F', 'F', 'T', 'T'}, q[4] = {'F', 'T', 'F', 'T'};
    char y[2] = {'F', 'T'};

    // conditional
    cout << "conditional" << endl;
    cout << "p\tq\ty" << endl;
    cout << "-----------------" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << "\t" << q[i] << "\t";
        if (p[i] == 'F' && q[i] == 'T')
            cout << y[0] << endl;
        else
            cout << y[1] << endl;
    }
    cout << endl
         << endl;
    // biconditional
    cout << "biconditional" << endl;
    cout << "p\tq\ty" << endl;
    cout << "-----------------" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << "\t" << q[i] << "\t";
        if (p[i] == q[i])
            cout << y[1] << endl;
        else
            cout << y[0] << endl;
    }
    return 0;
}