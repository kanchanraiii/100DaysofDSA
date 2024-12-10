// To implement a binary search tree and perform insertion, deletion.

#include<iostream>
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

Node* insert(Node* node,int key){
     if (node == NULL) 
        return new Node(key); 
     if (node->data == key) 
        return node;
     if (node->data < key) 
        node->right = insert(node->right, key);
     else 
        node->left = insert(node->left, key);
    return node;
}


void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main(){
    Node* root = new Node(50);
    cout<<"Inserting nodes..."<<endl;
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    cout<<"The inorder traversal is:"<<endl;
    inorder(root);

}