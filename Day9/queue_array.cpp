// To impelement queue using array

#include<iostream>
using namespace std;

#define MAX 100

class queue{
    int arr[MAX];
    int front,rear;
    public:
    queue(){
        front=-1;
        rear=-1;
    }

    void enqueue(int data){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=data;
        }
        else if(rear==MAX-1){
            cout<<"Queue is full"<<endl;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }

    void dequeue(){
        if(front==-1 && rear==-1){
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }
    }

    void display(){
        if(front==-1 && rear==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<"Queue is: ";
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<"Queue is: ";
    q.display();

}