#include<iostream>
#include<stack>

using namespace std;

class stack{
    int top;
    int arr[10];
public:
    stack(){
        top = -1;
    }
    void push(int x){
        if(top == 9){
            cout<<"Stack is full"<<endl;
        }
        else{
            top++;
            arr[top] = x;
        }
    }
    int pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            int x = arr[top];
            top--;
            return x;
        }
    }
};

int main()
{
    // stack<int> s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);



    return 0;
}