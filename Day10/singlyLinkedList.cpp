// To implement insertion, deletion, and traversal on a singly linked list

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            this->next=NULL;
        }

        void deleteNode(Node* head, int data){
            Node* temp=head;
            while(temp->next->data!=data){
                temp=temp->next;
            }
            Node* toDelete=temp->next;
            temp->next=temp->next->next;
            delete toDelete;
        }

        void display(Node* head){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;

            }
            cout<<endl;
        }        
};

int main(){
    cout<<"Inserting five node in the linked list:"<<endl;
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->display(head);
    cout<<"Deleting node with data 30:"<<endl;
    head->deleteNode(head, 30);
    cout<<"Linked list after deletion:"<<endl;
    head->display(head);


}