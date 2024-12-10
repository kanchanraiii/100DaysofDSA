// Solve the "find the lowest common ancestor of two nodes in a binary tree" problem.

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

Node* LowestCommonAncestor(Node* root, int p , int q){
    //Empty tree
    if(root==NULL){
        return NULL;
    }

    if(root->data==p || root->data==q){
        return root;
    }

    Node* left=LowestCommonAncestor(root->left,p,q);
    Node* right=LowestCommonAncestor(root->right,p,q);

    // nodes are in different subtrees
    if(left!=NULL && right!=NULL){
        return root;
    }
    //return non null subtree
    return left != NULL ? left : right;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);

    cout<<"The lowest common ancestor of "<<2<<" and"<<3<<" is:"<<LowestCommonAncestor(root,2,3)->data;
}