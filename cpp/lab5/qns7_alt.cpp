/*
Create a class Employee with data id, name, salary. Create constructor for those data and
display only those employees whose salary is greater than 5000.
*/

#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    int id, salary;
    char name[20];
public:

    Employee(int i, char *n, int s)
    {
        id = i;
        strcpy(name, n);
        salary = s;
    }
    void display()
    {
        if (salary > 5000)
        {
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
    }
};

int main()
{
    Employee e1(1, "John", 5000);
    Employee e2(2, "Jane", 6000);
    Employee e3(3, "Jack", 7000);
    Employee e4(4, "Jill", 8000);
    Employee e5(5, "Jim", 9000);
    Employee e6(6, "Joe", 10000);
    Employee e7(7, "Jenny", 11000);
    Employee e8(8, "Juan", 12000);
    Employee e9(9, "Jenny", 13000);
    Employee e10(10, "Juan", 14000);
    Employee e11(11, "Jenny", 15000);
    Employee e12(12, "Juan", 16000);
    Employee e13(13, "Jenny", 17000);
    Employee e14(14, "Juan", 18000);
    Employee e15(15, "Jenny", 19000);
    Employee e16(16, "Juan", 20000);
    Employee e17(17, "Jenny", 21000);
    Employee e18(18, "Juan", 22000);
    Employee e19(19, "Jenny", 23000);
    Employee e20(20, "Juan", 24000);
    Employee e21(21, "Jenny", 25000);
    Employee e22(22, "Juan", 26000);
    Employee e23(23, "Jenny", 27000);
    Employee e24(24, "Juan", 28000);
    Employee e25(25, "Jenny", 29000);
    Employee e26(26, "Juan", 30000);
    Employee e27(27, "Jenny", 31000);
    Employee e28(28, "Juan", 32000);
    Employee e29(29, "Jenny", 33000);
    Employee e30(30, "Juan", 34000);
    Employee e31(31, "Jenny", 35000);
    Employee e32(32, "Juan", 36000);
    Employee e33(33, "Jenny", 37000);
    Employee e34(34, "Juan", 38000);
    Employee e35(35, "Jenny", 39000);
}
