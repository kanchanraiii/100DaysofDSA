// To merge two sorted linked lists
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

Node* mergeSorted(Node* head1, Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    Node dummy1(0);
    Node* dummy= &dummy1;

    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data<=temp2->data){
            dummy->next=temp1;
            temp1=temp1->next;
        }
        else{
            dummy->next=temp2;
            temp2=temp2->next;
        }
        dummy=dummy->next;

    }
    return dummy1.next;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    cout<<"First linked list:"<<endl;
    Node* head1=new Node(10);
    head1->next=new Node(30);
    head1->next->next=new Node(50);
    display(head1);

    cout<<"Second linked list:"<<endl;
    Node* head2=new Node(20);
    head2->next=new Node(40);
    head2->next->next=new Node(60);
    display(head2);

    cout<<"Merging the two we get:"<<endl;
    Node* res=mergeSorted(head1,head2);
    display(res);
}