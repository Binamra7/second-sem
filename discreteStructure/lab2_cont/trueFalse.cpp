#include <iostream>

using namespace std;

int main()
{

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