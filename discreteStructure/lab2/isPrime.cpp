// WAP to check whether the entered number is prime or not.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i,c=0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            c++;
            break;
        }
    }
    if(c>=1)
    {
        cout<<"Not a prime number";
    }
    else
    {
        cout<<"Prime number";
    }
    
    return 0;
}