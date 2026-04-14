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

int countnode(node *root)
{
    if (root == nullptr)
        return 0;

    return countnode(root->left) + countnode(root->right) + 1;
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);

    cout << "Total node: " << countnode(root);

}