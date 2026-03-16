#include <iostream>
using namespace std;

struct node
{
    char data;
    node *next;
};

int main()
{
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    node *n4 = new node();
    node *n5 = new node();

    n1->data = 'a';
    n1->next = n2;

    n2->data = 'b';
    n2->next = n3;

    n3->data = 'c';
    n3->next = n4;

    n4->data = 'd';
    n4->next = n5;

    n5->data = 'e';
    n5->next = nullptr;

    node *temp = n1;
    node *start = temp;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != start);

    return 0;
}