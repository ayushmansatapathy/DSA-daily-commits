#include<iostream>
using namespace std;

#define size 5

int stack[size];
int top = -1;

// Push function (adding a new element into the stack)

void push(int x)
{
    if (top == size -1){
        cout << "Stack is oveflow\n";
    }
    else{
        stack[++top] = x;
        cout << x << "pushed\n";
        
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
}