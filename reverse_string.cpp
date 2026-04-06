// reverse a string

#include<iostream>
using namespace std;

 #define size 100

 char stack[size];
 int top = -1;

 void push(char c)
 {
    if(top == size-1)
    {
        cout << " overflow\n";
    }
    else
    {
        stack[++top] = c;
        cout << c;

    }
 }

 void pop()
{
    if (top == -1)
    {
        cout << " The stack in underflow\n";
    }
    else
    {
        char c = stack[top--];
        cout << c;
    }
}

 int main()
 {
    push('H');
    push('E');
    push('L');
    push('L');
    push('O');

    cout << " reversed string: ";

    pop();
    pop();
    pop();
    pop();
    pop();

    
 }