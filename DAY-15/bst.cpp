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


Node* deleteLeaf(Node* root, int key) {
    if (root == NULL)
        return NULL;

    
    if (key < root->data)
        root->left = deleteLeaf(root->left, key);

    else if (key > root->data)
        root->right = deleteLeaf(root->right, key);

    else {

        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        } else {
            cout << "Node is not a leaf, cannot delete!\n";
        }
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
    insert(root, 70);
    insert(root, 20);  
    insert(root, 40);  

    cout << "Before deletion: ";
    inorder(root);

    root = deleteLeaf(root, 20);  

    cout << "\nAfter deletion: ";
    inorder(root);

    return 0;
}