#include <iostream>

using namespace std;

// Write a program defining a class named Complex with two data member real and imaginary .
// Use necessary member functions for input/ output and define a member function that adds the
// two complex objects and return object. Also display the result using a member function
//  display()

class Complex
{
    int real, imag;

public:
    void read()
    {
        cout << "Enter num in a + ib: \n";
        cin >> real >> imag;
    }
    void display(Complex ans)
    {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex add(Complex a, Complex b)
    {
        Complex ans;
        ans.real = a.real + b.real;
        ans.imag = a.imag + b.imag;
        return ans;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.read();
    c1.display(c1);
    c2.read();
    c2.display(c2);
    c3 = c3.add(c1, c2);
    cout << "The sum is:\n";
    c3.display(c3);
    return 0;
}