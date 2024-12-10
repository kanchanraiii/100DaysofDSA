// To find the diameter of binary trees

#include<iostream>
#include<algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int diameterOfBinaryTree(Node* root, int& diameter) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = diameterOfBinaryTree(root->left, diameter);
    int rightHeight = diameterOfBinaryTree(root->right, diameter);

    diameter = max(diameter, leftHeight + rightHeight);

    return max(leftHeight, rightHeight) + 1;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int diameter = 0;
    diameterOfBinaryTree(root, diameter);
    
    cout << "Diameter of the binary tree is: " << diameter << endl;
    
    return 0;
}
