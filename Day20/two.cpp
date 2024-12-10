#include <iostream>
#include <climits>
using namespace std;

class Node{
    public:
     int data;
     Node* left;
     Node* right;

     Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
     }
};
bool isBSTUtil(Node* root, int minVal, int maxVal) {
    if (!root) return true;
    if (root->data <= minVal || root->data >= maxVal) return false;
    return isBSTUtil(root->left, minVal, root->data) && isBSTUtil(root->right, root->data, maxVal);
}

bool isBST(Node* root) {
    return isBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(2);
    root->left->right = new Node(7);
    
    if (isBST(root))
        cout << "The tree is a valid BST." << endl;
    else
        cout << "The tree is not a valid BST." << endl;
    return 0;
}
