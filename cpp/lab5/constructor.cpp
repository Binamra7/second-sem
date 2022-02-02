#include <iostream>

using namespace std;

class counter
{
    int counte;

public:
    counter()
    {
        counte = 0;
    }
    void increment()
    {
        counte++;
    }
    void display()
    {
        cout << "The count is: " << counte << endl;
    }
};

int main()
{
    counter c1, c2;
    c1.display();
    c2.display();
    c1.increment();
    c1.display();
    c2.increment();
    c2.increment();
    c2.display();
    return 0;
}