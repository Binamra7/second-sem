#include <iostream>

using namespace std;

int main()
{

    // char p[8] = {'T', 'T', 'T', 'T', 'F', 'F', 'F', 'F'};
    // char q[8] = {'T', 'T', 'F', 'F', 'T', 'T', 'F', 'F'};
    // char r[8] = {'T', 'F', 'T', 'F', 'T', 'F', 'T', 'F'};

    char p[4] = {'T', 'T', 'F', 'F'};
    char q[4] = {'T', 'F', 'T', 'F'};
    char pq[8], pnq[8];

    //(pnq)->(p->q)
    cout << "(pnq)->(p->q)" << endl;
    cout << "p\tq\tpnq\tp->q\t(pnq)->(p->q)" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << "\t" << q[i] << "\t";

        //prints and operation
        if (p[i] == 'T' && q[i] == 'T')
        {
            cout << 'T' << "\t";
            pnq[i] = 'T';
        }
        else
        {
            cout << 'F' << "\t";
            pnq[i] = 'F';
        }

        //prints p->q operation
        if (p[i] == 'T' && q[i] == 'F')
        {
            cout << 'F' << "\t";
            pq[i] = 'F';
        }
        else
        {
            cout << 'T' << "\t";
            pq[i] = 'T';
        }

        //prints pnq->p->q operation
        if (pnq[i] == 'T' && pq[i] == 'F')
            cout << 'F' << "\t";
        else
            cout << 'T' << "\t";

        cout << endl;
    }
    // cout << endl
    //      << endl;

    // cout << "conditional" << endl;
    // cout << "p\tq\tq V r\tp->(q V r)" << endl;
    // cout << "---------------------------------------------" << endl;
    // for (int i = 0; i < 8; i++)
    // {
    //     cout << p[i] << "\t" << q[i] << "\t";

    //     if (q[i] == 'F' && q[i] == 'F')
    //         cout << 'F' << "\t";
    //     else
    //         cout << 'T' << "\t";

    //     if (p[i] == 'T' and (q[i] == 'F' && r[i] == 'F'))
    //         cout << 'F' << "\t";
    //     else
    //         cout << 'T' << "\t";

    //     cout << endl;
    // }

    return 0;
}