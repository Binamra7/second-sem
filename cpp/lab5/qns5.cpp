/*
Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some 
more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an 
initial value of $50. Now make two constructors of this class as follows: 1 - without any 
parameter - no amount will be added to the Piggie Bank 2 - having a parameter which is the 
amount that will be added to the Piggie Bank Create an object of the 'AddAmount' class and 
display the final amount in the Piggie Bank. 
*/

#include <iostream>

using namespace std;

class AddAmount
{
    float balance = 50;

public:
    AddAmount()
    {
        balance = 50;
    }
    AddAmount(float d)
    {
        balance += d;
    }
    void display()
    {
        cout << "Balance is: $" << balance << endl;
    }
};

int main()
{
    AddAmount a1;
    a1.display();
    AddAmount a2(100);
    a2.display();
    return 0;
}