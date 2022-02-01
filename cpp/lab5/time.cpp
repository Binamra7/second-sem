// Write a program defining class named Time with hr and min
// as data.
// Use different fucntions for input and output with finding
// the sum of two different times by passing two objects and
// returning the object. Use these functions to solve this
// problem
#include <iostream>

using namespace std;

class time
{
    int hr, min;

public:
    void getInput()
    {
        cout << "Enter the hour: ";
        cin >> hr;
        cout << "Enter the minute: ";
        cin >> min;
    }
    void display()
    {
        cout << "The time is: " << hr << ":" << min << endl;
    }
    time sum(time t1, time t2)
    {
        time temp;
        temp.hr = t1.hr + t2.hr;
        temp.min = t1.min + t2.min;
        if (temp.min >= 60)
        {
            temp.hr += temp.min / 60;
            temp.min = temp.min % 60;
        }
        return temp;
    }
};

int main()
{
    time t1, t2, t3;
    t1.getInput();
    t1.display();
    t2.getInput();
    t2.display();
    t3 = t3.sum(t1, t2);
    cout << "The sum of time is:\n";
    t3.display();

    return 0;
}