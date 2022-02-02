#include <iostream>

using namespace std;

bool ans[4];

void display(bool a[], bool b[])
{

    // cout << "p\tq\tq->p" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << "\t" << b[i] << "\t";
        if (a[i] == false && b[i] == true)
            ans[i] = false;
        else
            ans[i] = true;
    }
}

void inverse(bool a[], bool b[])
{
    // cout << "p\tq\t~p->~q" << endl;
    for (int i = 0; i < 4; i++)
    {
        a[i] = !a[i];
        b[i] = !b[i];
    }
}

int main()
{
    // bool p[4] = {true, true, false, false};
    // bool q[4] = {true, false, true, false};
    // bool ans[4];
    // display(p, q);

    char p[4] = {'T', 'T', 'F', 'F'};
    char q[4] = {'T', 'F', 'T', 'F'};

    // cout << "For p->q ===~q->~p" << endl;
    // cout << "p\tq\t~p\t~q\tp->q\t~q->~p" << endl;
    // for (int i = 0; i < 4; i++)
    // {

    //     cout << p[i] << "\t" << q[i] << "\t";

    //     if (p[i] == 'F')
    //     {
    //         cout << "T"
    //              << "\t";
    //     }
    //     else
    //     {
    //         cout << "F"
    //              << "\t";
    //     }

    //     if (q[i] == 'F')
    //     {
    //         cout << "T"
    //              << "\t";
    //     }
    //     else
    //     {
    //         cout << "F"
    //              << "\t";
    //     }

    //     if (p[i] == 'T' && q[i] == 'F')
    //         cout << "F";
    //     else
    //         cout << "T";
    //     cout << "\t";

    //     if (p[i] == 'T' && q[i] == 'F')
    //         cout << 'F';
    //     else
    //         cout << 'T';
    //     cout << endl;
    // }

    return 0;
}