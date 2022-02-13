// Write a program defining a class named Account with account no and balance.
// Define the necessary functions to get data, display and money transfer.
// Prompt the user to transfer money from one account to another and adjust the balance.
// Solve this problem using pass objects by reference. Write a main() program to exercise this.
// (using inside and outside the class)

#include <iostream>

using namespace std;

class Account
{
    int accNo, balance;

public:
    void read()
    {
        cout << "Enter account no: ";
        cin >> accNo;
        cout << "Enter balance: ";
        cin >> balance;
    }
    void display(Account A)
    {
        cout << "Account no: " << A.accNo << endl;
        cout << "Balance: " << A.balance << endl;
    }
    void transfer(Account &a, Account &b)
    {
        int amount;
        cout << "Enter amount to transfer: ";
        cin >> amount;
        if (amount <= b.balance)
        {
            b.balance -= amount;
            a.balance += amount;
        }
        else
        {
            cout << "Insufficient balance\n";
        }
    }
};

int main()
{
    Account a, b, c;
    a.read();
    a.display(a);
    b.read();
    b.display(b);
    a.transfer(a, b);
    a.display(a);
    b.display(b);
    return 0;
}
