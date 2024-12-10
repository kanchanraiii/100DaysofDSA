// to make a binary tree

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

void inorderTraversal(Node* root){
    if(root!=NULL){
        inorderTraversal(root->left);
        cout<<"-"<<root->data;
        inorderTraversal(root->right);
    }
}

void postorderTraversal(Node* root){
    if(root!=NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<"-"<<root->data;
    }
}

void preorderTraversal(Node* root){
    if(root!=NULL){
    cout<<"-"<<root->data;
    preorderTraversal(root->left);
    preorderTraversal(root->right);
    }
}

int main(){
     // Creating a binary tree
    Node* root = new Node(10);
    Node* one = new Node(20);
    Node* two = new Node(30);
    Node* three = new Node(40);
    Node* four = new Node(50);
    Node* five = new Node(60);
    Node* six = new Node(70);

    root->left = two;
    root->right = one;
    two->left = three;
    two->right = four;
    one->left = five;
    one->right = six;
    
     cout<<"The tree has been created."<<endl;
     cout<<"Inorder traversal:"<<endl;
     inorderTraversal(root);
     cout<<endl;
     cout<<"Preorder traversal:"<<endl;
     preorderTraversal(root);
     cout<<endl;
     cout<<"Postorder traversal:"<<endl;
     postorderTraversal(root);

}

