// To find the middle element in a singly linked list.

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

      void findMiddleElement(Node* head){
        Node* slow=head;
        Node* fast= head->next->next;

        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }

        cout<<slow->data<<endl;
      }
};

int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    cout<<"The middle element is:";
    head->findMiddleElement(head);

}