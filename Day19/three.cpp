// To convert a binary tree to its mirror
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

Node* mirrorTree(Node* root){
    if(root==NULL){
        return NULL;
    }

    Node*temp=root->left;
    root->left=root->right;
    root->right=temp;
    mirrorTree(root->left);
    mirrorTree(root->right);
}

void inorderTraversal(Node*root){
    if(root!=NULL){
    inorderTraversal(root->left);
    cout<<root->data<<"-";
    inorderTraversal(root->right);
    }
  
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);
    cout<<"The Tree is:"<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"The mirror tree is:"<<endl;
    mirrorTree(root);
    inorderTraversal(root);
}