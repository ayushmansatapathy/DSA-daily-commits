#include <iostream>
using namespace std;

#define size 5

int stack[size];
int top = -1;

void push(int x)
{
    if (top == size-1)
    {
        cout << " The stack is overflow\n";
    }
    else
    {
        stack[++top] = x;
        cout << x << " added\n";
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
        int x = stack[top--];
        cout << x << " removed\n";
    }
}


// Peek function ( to see the top element in the stack)
void peek() 
{
    if (top == -1) 
    {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Top element: " << stack[top] << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    pop();
    peek();
}