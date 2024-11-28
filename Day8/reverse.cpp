// Write a program to reverse a string using a stack.

#include<iostream>
#include<stack>
#include<string>
using namespace std;

string reverseString(string str) {
    stack<char> s;
    for(int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }
    for(int i = 0; i < str.length(); i++) {
        str[i] = s.top();
        s.pop();
    }
    return str;
}

int main() {
    string str = "Hello, World!";
    cout << "Original: " << str << endl;
    cout << "Reversed: " << reverseString(str) << endl;
    return 0;
}
