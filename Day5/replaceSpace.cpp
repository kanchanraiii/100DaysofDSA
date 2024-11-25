// To replace space with a special character in a string
#include<iostream>
using namespace std;

void replaceSpace(string s,char c){
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s[i]=c;
        }
    }
    cout<<s;
}

int main(){
    string s;
    char c;
    cout<<"Enter the string:";
    getline(cin,s);
    cout<<"Enter the special character:";
    cin>>c;
    replaceSpace(s,c);

}