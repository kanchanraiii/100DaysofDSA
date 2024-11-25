// To find all substrings of a string
#include<iostream>  
using namespace std;

void allSubstrings(string s){
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            for(int k=i;k<=j;k++){
                cout<<s[k];
            }
            cout<<endl;
        }
    }
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    allSubstrings(s);
}