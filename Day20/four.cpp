#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    Node(int val) : key(val), left(nullptr), right(nullptr) {}
};

class BST {
public:
    Node* root;
    BST() : root(nullptr) {}

    void insert(int key) {
        root = insertRec(root, key);
    }

    int findFloor(int key) {
        return findFloorRec(root, key);
    }

    int findCeil(int key) {
        return findCeilRec(root, key);
    }

private:
    Node* insertRec(Node* root, int key) {
        if (!root) return new Node(key);
        if (key < root->key)
            root->left = insertRec(root->left, key);
        else
            root->right = insertRec(root->right, key);
        return root;
    }

    int findFloorRec(Node* root, int key) {
        int floor = -1;
        while (root) {
            if (root->key == key) return root->key;
            if (root->key < key) {
                floor = root->key;
                root = root->right;
            } else {
                root = root->left;
            }
        }
        return floor;
    }

    int findCeilRec(Node* root, int key) {
        int ceil = -1;
        while (root) {
            if (root->key == key) return root->key;
            if (root->key > key) {
                ceil = root->key;
                root = root->left;
            } else {
                root = root->right;
            }
        }
        return ceil;
    }
};

int main() {
    BST tree;
    tree.insert(8);
    tree.insert(4);
    tree.insert(12);
    tree.insert(2);
    tree.insert(6);
    tree.insert(10);
    tree.insert(14);

    int key = 5;
    cout << "Floor of " << key << " is: " << tree.findFloor(key) << endl;
    cout << "Ceil of " << key << " is: " << tree.findCeil(key) << endl;

    return 0;
}
