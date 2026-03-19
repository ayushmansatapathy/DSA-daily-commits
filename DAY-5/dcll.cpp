#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node* prev;
};

int main() {

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    third->next = head;   
    head->prev = third;   

    Node* temp = head;
    do {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(head)" << endl;

    return 0;
}