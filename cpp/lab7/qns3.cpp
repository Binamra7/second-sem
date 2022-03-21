#include <iostream>

using namespace std;

class Counter
{
    int count;

public:
    Counter()
    {
        count = 7;
    }
    void display()
    {
        cout << "Count: " << count << endl;
    }
    Counter operator++()
    {
        Counter ans;
        ans.count++;
        return ans;
    }
    Counter operator++(int)
    {
        Counter a;
        a.count++;
        return a;
    }
};

int main()
{
    Counter c1;
    c1.display();
    c1 = ++c1;
    c1.display();
    c1 = c1++;
    c1.display();
    return 0;
}