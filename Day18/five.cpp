// To do the level order traversal also knowon as breadth first search of a tree

#include<iostream>
#include<queue>
using namespace std;

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

void levelOrderTraversal(Node* root){
    if(root==NULL) return;

    queue<Node*>queue;
    queue.push(root);

    while(!queue.empty()){
        Node* current = queue.front();
        queue.pop();
        cout<<current->data<<" "; // visiting the current node

        if(current->left!=NULL) queue.push(current->left);
        if(current->right!=NULL) queue.push(current->right);
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Level-order traversal of the binary tree: ";
    levelOrderTraversal(root);
    cout << endl;
}