// To remove duplicate characters from a string
#include<iostream>
using namespace std;
bool isPresent(char c,string s){
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            return true;
        }
    }
    return false;
}
void removeDuplicate(string s){
    string t;
    for(int i=0;i<s.size();i++){
           if(!isPresent(s[i],t)){
            t.push_back(s[i]);
           }
    }
    cout<<"String after removing duplicate characters is:";
    cout<<t;
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    removeDuplicate(s);
}