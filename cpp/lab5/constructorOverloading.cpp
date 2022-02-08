#include <iostream>
using namespace std;

class Account
{
private:
    int Acc;
    float balance;

public:
    Account()
    {
        Acc = 50;
        balance = 500.00;
        // display();
    }
    Account(int n)
    {
        Acc = n;
        balance = 500.00;
        // display();
    }

    Account(int n, int m)
    {
        Acc = n;
        balance = m;
        // display();
    }

    void display()
    {
        cout << "Account no. = " << Acc << "  balance= " << balance << endl;
    }
};

int main()
{
    Account a;
    Account b(56);
    Account c(50, 5000);
    cout << "The account information is:\n";
    a.display();
    b.display();
    c.display();
    return 0;
}