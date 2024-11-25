// To check if a string is anagram or not
#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
       return true;
    }
    return false;   
}

int main(){
    string s1,s2;
    cout<<"Enter the first string:";
    cin>>s1;
    cout<<"Enter the second string:";
    cin>>s2;
    if(anagram(s1,s2)){
        cout<<"Yes, both are anagrams."<<endl;
    }
    else{
        cout<<"No, these are not anagrams."<<endl;
    }
}