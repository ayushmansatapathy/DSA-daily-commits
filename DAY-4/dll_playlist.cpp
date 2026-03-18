#include<iostream>
using namespace std;

struct node
{
    string song;
    node*next;
    node*prev;
};
 
int main()
{
    node *head = NULL, *temp, *newnode;

    for (int i=1;i<=3;i++)
    {
        newnode = new node();
        cout << "Enter song" << i << ":";
        cin >> newnode->song;

        newnode->next = nullptr;
        newnode->prev = nullptr;

        if(head == nullptr)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;

        }
        
    }

    cout << "\nForward Playlist: ";
    temp = head;
    while (temp != NULL)
    {
        cout << temp->song << " -> ";
        temp = temp->next;
    }

    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    cout << "\nBackward Playlist: ";
    while (temp != NULL)
    {
        cout << temp->song << " -> ";
        temp = temp->prev;
    }

    return 0;
}