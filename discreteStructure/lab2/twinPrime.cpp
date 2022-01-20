// WAP to print twin prime numbers from 1 to 100

#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 100; i++)
    {
        for (j = 1; j <= 100; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if (i + j == 2 * j + 1)
                {
                    cout << i << " " << j << endl;
                }
            }
        }
    }
    return 0;
}