#include <iostream>
using namespace std;
#define MAX 100

class circular_queue {
    int front, rear;
    int arr[MAX];

public:
    circular_queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int data) {
        if ((rear + 1) % MAX == front) {
            cout << "Queue is full" << endl;
        } else if (front == -1 && rear == -1) {
            front = rear = 0;
            arr[rear] = data;
        } else {
            rear = (rear + 1) % MAX;
            arr[rear] = data;
        }
    }

    void dequeue() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
        } else if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }

    void display() {
        if (front == -1 && rear == -1) {
            cout << "Queue is empty" << endl;
        } else {
            int i = front;
            while (i != rear) {
                cout << arr[i] << " ";
                i = (i + 1) % MAX;
            }
            cout << arr[rear] << endl;
        }
    }
};

int main() {
    circular_queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << "Queue is:" << endl;
    q.display();

    q.dequeue();
    cout << "Queue after one dequeue:" << endl;
    q.display();

    return 0;
}
