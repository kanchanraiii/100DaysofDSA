// To check if two trees are identical 

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

bool identicalTrees(Node* root1, Node* root2){
    if(root1 == NULL && root2==NULL){
        return true;
    }
   if (root1 == NULL || root2 == NULL){
        return false;
   }

   if(root1->data == root2->data && identicalTrees(root1->left, root2->left) && root1->right, root2->right){
        return true;
    }

    else{
        return false;
    }
}

int main(){
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);

    // Create second binary tree
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);

    // Check if trees are identical
    if (identicalTrees(root1, root2))
        cout << "The trees are identical." << endl;
    else
        cout << "The trees are not identical." << endl;
}