#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // 🔹 Creating initial circular linked list: 10 20 30 40 50

    Node *head, *n1, *n2, *n3, *n4, *n5;

    n1 = new Node(); n1->data = 10;
    n2 = new Node(); n2->data = 20;
    n3 = new Node(); n3->data = 30;
    n4 = new Node(); n4->data = 40;
    n5 = new Node(); n5->data = 50;

    head = n1;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = head; 


    Node* newNode = new Node();
    newNode->data = 5;

    Node* temp = head;


    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;   
    newNode->next = head;   
    head = newNode;         

    temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(head)" << endl;

    return 0;
}