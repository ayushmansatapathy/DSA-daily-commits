#include <iostream>
using namespace std;

struct Coach
{
    int number;
    Coach *next;
};

int main()
{
    Coach *head = NULL, *temp, *newNode;

    for (int i = 1; i <= 3; i++)
    {
        newNode = new Coach();
        cout << "Enter coach number " << i << ": ";
        cin >> newNode->number;

        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "\nTrain Coaches: ";
    temp = head;
    while (temp != NULL)
    {
        cout << temp->number << " -> ";
        temp = temp->next;
    }

    return 0;
}