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

    Node* convertToDoublyLinkedList() {
        Node* head = nullptr, *prev = nullptr;
        convertRec(root, prev, head);
        return head;
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

    void convertRec(Node* root, Node*& prev, Node*& head) {
        if (!root) return;
        convertRec(root->left, prev, head);
        if (!prev) head = root;
        else {
            prev->right = root;
            root->left = prev;
        }
        prev = root;
        convertRec(root->right, prev, head);
    }
};

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->key << " ";
        temp = temp->right;
    }
    cout << endl;
}

int main() {
    BST tree;
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(2);
    tree.insert(7);

    Node* head = tree.convertToDoublyLinkedList();
    printList(head);

    return 0;
}
