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
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

Node* deleteRoot(Node* root) {
    if (root == NULL)
        return NULL;

    if (root->left == NULL && root->right != NULL) {
        Node* temp = root->right;
        delete root;
        return temp;
    }

    if (root->right == NULL && root->left != NULL) {
        Node* temp = root->left;
        delete root;
        return temp;
    }

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

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);

    root = deleteRoot(root);

    inorder(root);

    return 0;
}