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
    Employee(int i, int s, char n[])
    {
        id = i;
        salary = s;
        strcpy(name, n);
    }

    void display()
    {
        if (salary > 5000)
            cout << id << "\t" << salary << "\t" << name << endl;
    }
};

int main()
{
    Employee e1(1, 4000, "ram");
    Employee e2(2, 5000, "anish");
    Employee e3(3, 6000, "gita");
    Employee e4(4, 7000, "shyam");
    Employee e5(5, 8000, "hari");
    cout << "\nEmployees data:\n\n";
    cout << "id\tsalary\tname\n";
    cout << "----------------------------" << endl;
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
    
    // Employee e[10];
    // int n;
    // int salary, id;
    // string name;
    // cout << "Enter the number of employees: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter id: ";
    //     cin >> id;
    //     cout << "Enter salary: ";
    //     cin >> salary;
    //     cout << "Enter name: ";
    //     cin >> name;
    //     e[i].storeData(id, salary, name);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     e[i].display();
    // }
    return 0;
}
