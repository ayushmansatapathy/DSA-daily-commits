#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

int main()
{
    node *n1, *n2, *n3, *n4;

    n1 = new node();
    n2 = new node();
    n3 = new node();
    n4 = new node();

    n1->data = 10;
    n1->next = n2;
    n1->prev = nullptr;

    n2->data = 20;
    n2->next = n3;
    n2->prev = n1;

    n3->data = 30;
    n3->next = n4;
    n3->prev = n2;  

    n4->data = 40;
    n4->next = nullptr;
    n4->prev = n3;

    node *temp = n4;

    while (temp != nullptr)  
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }

    return 0;
}