// To find a cycle in the linked list

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

bool cycleDetection(Node* head){
    if(head == NULL || head->next==NULL){
        return false;
    }

    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = head->next;
    bool res=cycleDetection(head);
    if(res){
        cout<<"Yes the linked list has a cycle"<<endl;
    }
    else{
        cout<<"No cycle detected";
    }


}