#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

int main()
{
    node *n1, *n2, *n3;

    n1 = new node();
    n2 = new node();
    n3 = new node();

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = n1;   

    node* start = n1;
    node* temp = start;

    
    cout << "Circular Linked List: ";
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != start);

    return 0;
}