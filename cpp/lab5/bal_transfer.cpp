#include <iostream>
#include <iomanip>
using namespace std;

class Account
{
private:
    int acc_no , bal, i, n, counter = 0;
public:
    void getInput()
    {
        cout<< "Enter your account number: ";
        cin>> acc_no;

        cout<< "Enter your balance: ";
        cin>> bal;

        cout<< endl;
    }

    int checkVAlidity(int n, Account acc1[], int client)
    {
        int i, counter = 0;
        for(i=0; i<n; i++)
        {
            if (acc1[i].acc_no == client)
            {
                counter++;
                break;
            }

        }
        return counter;
    }

    void moneyTransfer(int n, Account acc1[10])
    {
        int sender, receiver, transfer_amount, j, k;

        label_sender:
        cout<<"From which account number do you want to transfer? ";
        cin>> sender;

        if(checkVAlidity(n,acc1,sender) == 0)
        {
            cout<< "Error: Account Not found\n\n";
            goto label_sender;
        }

        else
        {
            label_receiver:
            cout<<"To which Account you want to receive the amount? ";
            cin>> receiver;

            if(checkVAlidity(n,acc1,receiver) == 0)
            {
                cout<< "Error: Account Not found\n\n";
                goto label_receiver;
            }

            else
            {
                for(i=0; i<n; i++)
                {
                    if(sender == acc1[i].acc_no)
                        j = i;
                    if(receiver == acc1[i].acc_no)
                        k = i;
                }

                label_trans1:
                cout<< "\nWhat amount you want to transfer? ";
                cin>> transfer_amount;
                if(transfer_amount > acc1[j].bal)
                {
                     cout<< "\nError: Insufficient balance for the transaction\n"
                         <<"Max amount is " << acc1[j].bal <<endl;
                    goto label_trans1;
                }

                else
                {
                    acc1[k].bal += transfer_amount;
                    acc1[j].bal -= transfer_amount;
                    cout<< "\nSuccessfully sent amount '" << transfer_amount
                        <<"' to account number '" <<acc1[k].acc_no <<"' "<<endl;

                    cout<< setw(18) << "\nAccount Number"
                        << setw(14) <<"Balance\n"
                        << setw(25) << "---------------------------\n";

                    for(i=0; i<n; i++)
                    {
                        display(acc1[i]);
                    }
                }
            }
        }
    }

    void display(Account acc1)
    {
        cout<< setw(14) << acc1.acc_no
            << setw(13) << acc1.bal << endl;
    }
};

int main()
{
    Account record[10];
    int n,i;

    cout<< "How many data do you want to enter?: ";
    cin>> n;

    cout<< endl;

    for(i=0; i<n; i++)
    {
        record[i].getInput();
    }

    record.moneyTransfer(n, record);

    return 0;
}
