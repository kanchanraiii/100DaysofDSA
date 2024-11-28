// Implement a stack that supports push, pop, and finding the minimum element in O(1) time.

#include<iostream>
#include<stack>
using namespace std;

class Stack {
    stack<int> s;
    int minEle;
    public:
    void getMin();
    void peek();
    void pop();
    void push(int x);
};

void Stack::getMin() {
    if(s.empty()) cout << "Stack is empty" << endl;
    else cout << "Minimum element in the stack is: " << minEle << endl;
}

void Stack::peek() {
    if(s.empty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    int t = s.top();
    cout << "Top Most Element is: ";
    (t < minEle) ? cout << minEle : cout << t;
    cout << endl;
}

void Stack::pop() {
    if(s.empty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top Most Element Removed: ";
    int t = s.top();
    s.pop();
    if(t < minEle) {
        cout << minEle << endl;
        minEle = 2*minEle - t;
    } else {
        cout << t << endl;
    }
}

void Stack::push(int x) {
    if(s.empty()) {
        minEle = x;
        s.push(x);
        cout << "Number Inserted: " << x << endl;
        return;
    }
    if(x < minEle) {
        s.push(2*x - minEle);
        minEle = x;
    } else {
        s.push(x);
    }
    cout << "Number Inserted: " << x << endl;
}

int main() {
    Stack s;
    s.push(3);
    s.push(5);
    s.getMin();
    s.push(2);
    s.push(1);
    s.getMin();
    s.pop();
    s.getMin();
    s.pop();
    s.peek();
    return 0;
}

