// To reverse a string
#include<iostream>
#include<string>
using namespace std;

void reverse(string s){
    int size=s.size();
    int j=0;
    string t(size,' ');
    for(int i=size-1;i>=0;i--){
        t[j++]=s[i];
    }

    cout<<t<<endl;
}

int main(){
    string s="hello world";
    cout<<"Reverse of "<<s<<endl;
    reverse(s);
}