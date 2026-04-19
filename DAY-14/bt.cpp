#include <iostream>
using namespace std;

struct Node {
    string name;
    Node* left;
    Node* right;

    Node(string val) {
        name = val;
        left = right = NULL;
    }
};

int height(Node* root) {
    if (root == NULL) return 0;

    return max(height(root->left), height(root->right)) + 1;
}

void printLevel(Node* root, int level) {
    if (root == NULL) return;

    if (level == 1) {
        cout << root->name << " ";
    } else {
        printLevel(root->left, level - 1);
        printLevel(root->right, level - 1);
    }
}

void printHierarchy(Node* root) {
    int h = height(root);

    for (int i = 1; i <= h; i++) {
        printLevel(root, i);
    }
}

int main() {
    Node* CEO = new Node("CEO");
    CEO->left = new Node("Manager1");
    CEO->right = new Node("Manager2");

    CEO->left->left = new Node("Employee1");
    CEO->left->right = new Node("Employee2");

    CEO->right->left = new Node("Employee3");
    CEO->right->right = new Node("Employee4");

    cout << "Company Hierarchy:\n";
    printHierarchy(CEO);

    return 0;
}