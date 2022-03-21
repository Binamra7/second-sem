// Write a C++ program using operator overloading of binary operator + for addition of two strings. Use necessary data and functions to solve this problem.

#include <iostream>
#include <string.h>
using namespace std;

class st_ct
{
    // string a;
    char a[30];

public:
    st_ct()
    {
        // a = "";
        strcpy(a, "");
    }

    st_ct(char b[])
    {
        // a = b;
        strcpy(a, b);
    }
    void display()
    {
        cout << "string: " << a << endl;
    }
    st_ct operator+(st_ct san)
    {
        st_ct c;
        strcat(a, san.a);
        strcpy(c.a, a);
        return c;
    }
};

int main()
{
    st_ct s1("trinity");
    st_ct s2("college");
    s1.display();
    s2.display();
    st_ct s3;
    s3 = s1 + s2;
    s3.display();
    return 0;
}