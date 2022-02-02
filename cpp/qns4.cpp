#include<iostream>
#include<stack>

using namespace std;

class Rectangle{
    int length, breadth;
    public:
    Rectangle(){
        length = breadth = 0;
    }
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    Rectangle(int l){
        length = breadth = l;
    }
    void calc(){
        cout<<"Area of rectangle is: "<<length*breadth<<endl;
    }
};

int main()
{
    Rectangle r1, r2(10,20), r3(30);
    r1.calc();
    r2.calc();
    r3.calc();
    return 0;
}