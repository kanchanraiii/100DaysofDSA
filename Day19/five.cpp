#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void flatten(Node* root) {
    if (root == NULL) return;

    // If left child exists, flatten it first
    if (root->left) {
        flatten(root->left);
        
        // Save the right subtree
        Node* temp = root->right;

        // Move the left subtree to the right
        root->right = root->left;
        root->left = NULL;

        // Find the rightmost node of the new right subtree
        Node* current = root->right;
        while (current->right) {
            current = current->right;
        }

        // Attach the saved right subtree
        current->right = temp;
    }

    // If no left child, move to the right
    flatten(root->right);
}

void printFlattenedTree(Node* root) {
    while (root) {
        cout << root->data << " ";
        root = root->right;
    }
    cout << endl;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);

    cout << "Original tree: " << endl;
    printFlattenedTree(root);

    flatten(root);

    cout << "Flattened tree: " << endl;
    printFlattenedTree(root);

    return 0;
}
