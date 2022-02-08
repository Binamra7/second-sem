#include<iostream>

using namespace std;

long long int solve(int a,int n)
{
    if(n==0)
        return 1;
    return a * solve(a, n-1);
}

int main()
{
    int a, n;
    cout<<"Enter a : ";
    cin >> a;
    cout<<"Enter n : ";
    cin >> n;
    cout << "a^n = " << solve(a, n);
    return 0;
}