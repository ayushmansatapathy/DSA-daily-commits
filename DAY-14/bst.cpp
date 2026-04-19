#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;

    root = insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 2);
    insert(root, 7);

    inorder(root);

    return 0;
}