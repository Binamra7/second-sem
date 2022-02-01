/*Write a program defining a class named Account with account no and balance.
Define the necessary functions to get data, display and money transfer.
Prompt the user to transfer money from one account to another and adjust the balance.
Solve this problem using pass objects by reference. Write a main() program to exercise this.
(using inside and outside the class)*/

#include <iostream>
#include <iomanip>
using namespace std;

class Account
{
private:
    int acc_no, bal;

public:
    void getInput()
    {
        cout << "Enter your account number: ";
        cin >> acc_no;

        cout << "Enter your balance: ";
        cin >> bal;

        cout << endl;
    }

    void moneyTransfer(Account &acc1, Account &acc2)
    {
        int sender, receiver, transfer_amount;

    label_sender:
        cout << "From which account number do you want to transfer? ";
        cin >> sender;

        if (sender != acc1.acc_no && sender != acc2.acc_no)
        {
            cout << "Error: Account Not found\n\n";
            goto label_sender;
        }

        else
        {
        label_receiver:
            cout << "To which Account you want to receive the amount? ";
            cin >> receiver;

            if (receiver != acc1.acc_no && receiver != acc2.acc_no)
            {
                cout << "Error: Account Not found\n\n";
                goto label_receiver;
            }

            else
            {
                if (sender == acc1.acc_no)
                {
                label_trans1:
                    cout << "\nWhat amount you want to transfer? ";
                    cin >> transfer_amount;
                    if (transfer_amount > acc1.bal)
                    {
                        cout << "\nError: Insufficient balance for the transaction\n"
                             << "Max amount is " << acc1.bal << endl;
                        goto label_trans1;
                    }

                    else
                    {
                        acc2.bal += transfer_amount;
                        acc1.bal -= transfer_amount;
                        cout << "\nSuccessfully sent amount '" << transfer_amount
                             << "' to account number '" << acc2.acc_no << "' " << endl;

                        cout << setw(18) << "\nAccount Number"
                             << setw(14) << "Balance\n"
                             << setw(25) << "---------------------------\n";

                        display(acc1);
                        display(acc2);
                    }
                }

                else if (sender == acc2.acc_no)
                {
                label_trans2:
                    cout << "\nWhat amount you want to transfer? ";
                    cin >> transfer_amount;
                    if (transfer_amount > acc2.bal)
                    {
                        cout << "\nError: Insufficient balance for the transaction\n"
                             << "Max amount is " << acc2.bal << endl;
                        goto label_trans2;
                    }

                    else
                    {
                        acc1.bal += transfer_amount;
                        acc2.bal -= transfer_amount;
                        cout << "\nSuccessfully sent amount '" << transfer_amount
                             << "' to account number '" << acc1.acc_no << "' " << endl;

                        cout << setw(18) << "\nAccount Number"
                             << setw(14) << "Balance\n"
                             << setw(25) << "---------------------------\n";

                        display(acc1);
                        display(acc2);
                    }
                }
            }
        }
    }

    void display(Account acc1)
    {
        cout << setw(14) << acc1.acc_no
             << setw(13) << acc1.bal << endl;
    }
};

int main()
{
    Account account_1, account_2;

    account_1.getInput();
    account_2.getInput();

    account_1.moneyTransfer(account_1, account_2);

    return 0;
}
