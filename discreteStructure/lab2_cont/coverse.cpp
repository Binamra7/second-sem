// include iostream
#include <iostream>
using namespace std;

int main()
{
    char p[4] = {'T', 'T', 'F', 'F'};
    char q[4] = {'T', 'F', 'T', 'F'};
    // print truth table for converse statement logically

    cout << "Truth table for converse statement: " << endl;
    cout << "p\tq\tq->p" << endl;
    // calculate the truth table for converse statement
    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << "\t" << q[i] << "\t";
        if (p[i] == 'F' and q[i] == 'T')
            cout << 'F' << endl;
        else
            cout << 'T' << endl;
    }

    cout << "Truth table for inverse statement: " << endl;
    cout << "p\tq\t~p->~q" << endl;
    // calculate the truth table for inverse statement
    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << "\t" << q[i] << "\t";
        if (p[i] == 'F' and q[i] == 'T')
            cout << 'F' << endl;
        else
            cout << 'T' << endl;
    }

    cout << "Truth table for contrapositive statement: " << endl;
    cout << "p\tq\t~q->~p" << endl;
    // calculate the truth table for contrapositive statement
    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << "\t" << q[i] << "\t";
        if (p[i] == 'T' and q[i] == 'F')
            cout << 'F' << endl;
        else
            cout << 'T' << endl;
    }

    return 0;
}