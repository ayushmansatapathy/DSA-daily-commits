#include <iostream>
#include <vector>
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

void findPaths(Node* root, vector<string>& path) {
    if (root == NULL) return;

    path.push_back(root->name);

    if (root->left == NULL && root->right == NULL) {
        for (string p : path) {
            cout << p << " -> ";
        }
        cout << "END" << endl;
    } 
    else {
        findPaths(root->left, path);
        findPaths(root->right, path);
    }

    path.pop_back();
}

int main() {
    // Create tree (road network)
    Node* root = new Node("Start");

    root->left = new Node("A");
    root->right = new Node("B");

    root->left->left = new Node("C");
    root->left->right = new Node("D");

    root->right->right = new Node("E");

    vector<string> path;

    cout << "All Routes:\n";
    findPaths(root, path);

    return 0;
}