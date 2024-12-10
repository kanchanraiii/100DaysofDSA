// To find the height of a binary tree

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

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    else{
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        return max(leftHeight,rightHeight)+1;
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<"Height of the tree is:"<<height(root)<<endl;
}