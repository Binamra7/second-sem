#include <iostream>

using namespace std;

int main()
{

    char p[8] = {'T', 'T', 'T', 'T', 'F', 'F', 'F', 'F'};
    char q[8] = {'T', 'T', 'F', 'F', 'T', 'T', 'F', 'F'};
    char r[8] = {'T', 'F', 'T', 'F', 'T', 'F', 'T', 'F'};

    char temp1[8], temp2[8];
    char y[2] = {'F', 'T'};

    // conditional
    cout << "conditional" << endl;
    cout << "p\tq\tp->q\tq->r\t(p->q)V(q->r)" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << p[i] << "\t" << q[i] << "\t";
        if (p[i] == 'T' && q[i] == 'F')
            cout << 'F' << "\t";
        else
            cout << 'T' << "\t";

        if (q[i] == 'T' && r[i] == 'F')
            cout << 'F' << "\t";
        else
            cout << 'T' << "\t";

        if (p[i] == 'T' && q[i] == 'F' && r[i] == 'F')
            cout << 'F' << "\t";
        else
            cout << 'T' << "\t";

        cout << endl;
    }
    cout << endl
         << endl;
    // conditional
    cout << "conditional" << endl;
    cout << "p\tq\tq V r\tp->(q V r)" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << p[i] << "\t" << q[i] << "\t";

        if (q[i] == 'F' && q[i] == 'F')
            cout << 'F' << "\t";
        else
            cout << 'T' << "\t";

        if (p[i] == 'T' and (q[i] == 'F' && r[i] == 'F'))
            cout << 'F' << "\t";
        else
            cout << 'T' << "\t";

        cout << endl;
    }

    // else
    //     cout << 'T' << "\t";
    // if (q[i] == 'F' && r[i] == 'F')
    //     cout << 'F' << "\t";
    // else
    //     cout << 'T' << "\t";
    // if (p[i] == 'F' && r[i] == 'F')
    //     cout << 'F' << endl;
    // else
    //     cout << 'T' << endl;
    // {
    //     cout << p[i] << "\t" << q[i] << "\t";
    //     if (p[i] == 'F' && q[i] == 'T')
    //         cout << y[0] << endl;
    //     else
    //         cout << y[1] << endl;
    // }
    // cout << endl
    //      << endl;
    // // biconditional
    // cout << "biconditional" << endl;
    // cout << "p\tq\ty" << endl;
    // cout << "-----------------" << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << p[i] << "\t" << q[i] << "\t";
    //     if (p[i] == q[i])
    //         cout << y[1] << endl;
    //     else
    //         cout << y[0] << endl;
    // }
    return 0;
}