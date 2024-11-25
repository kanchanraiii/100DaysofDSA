// To check if a string is pallindrome or not

#include<iostream>
using namespace std;

bool pallindrome(string s){
    int size=s.size();
    int j=0;
    for(int i=size-1;i>=0;i--){
        if(s[i]!=s[j++]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int res=pallindrome(s);
    if(res==1){
        cout<<"Given string is a pallindrome";
    }
    else{
        cout<<"String is not a pallindrome";
    }
}