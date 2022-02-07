#include <iostream>

using namespace std;

class AddAmount
{
    float balance;

public:
    AddAmount()
    {
        balance += 50;
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