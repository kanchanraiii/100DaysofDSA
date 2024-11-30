// To reverse a linked list

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
};

Node* reverseLinkedList(Node* head){
    Node* Prev=NULL;
    Node* Curr=head;
    Node* Next=NULL;

    while(Curr!=NULL){
        Next=Curr->next;
        Curr->next=Prev;
        Prev=Curr;
        Curr=Next;
    }

    return Prev;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    cout<<"Original Linked List:"<<endl;
    display(head);
    Node* rev=reverseLinkedList(head);
    cout<<"After reversing linked list:"<<endl;
    display(rev);
}