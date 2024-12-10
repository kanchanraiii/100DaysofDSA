#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int val) : key(val), left(nullptr), right(nullptr) {}
};

void inorderTraversal(Node* root, int& k, int& result) {
    if (!root || k <= 0) return;
    inorderTraversal(root->left, k, result);
    k--;
    if (k == 0) {
        result = root->key;
        return;
    }
    inorderTraversal(root->right, k, result);
}

int kthSmallest(Node* root, int k) {
    int result = -1;
    inorderTraversal(root, k, result);
    return result;
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(2);
    root->left->right = new Node(7);

    int k = 3;
    cout << "The " << k << "rd smallest element is: " << kthSmallest(root, k) << endl;
    return 0;
}
