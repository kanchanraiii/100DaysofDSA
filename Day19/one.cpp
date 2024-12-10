// To check if a binary tree is balanced

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

bool isBalanced(Node* root){
    int lh,rh;
    if(root==NULL){
        return true;
    }
    else{
        lh=height(root->left);
        rh=height(root->right);

        if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right)){
            return true;
        }
    }
    return false;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);

    if (isBalanced(root))
        cout << "The tree is balanced";
    else
        cout << "The tree is not balanced";
    return 0;

}