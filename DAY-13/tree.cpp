#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

void inorder(node *root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);

    cout << "Traversing: ";
    inorder(root);

    return 0;
}