// To find the first non repeating character in a string
#include<iostream>
using namespace std;


char nonRepeating(string s){
    for(char c:s){
        if(s.find(c)==s.rfind(c)){
            return c;
        }
    }
    return '0';
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    char result=nonRepeating(s);
    if(result=='0'){
        cout<<"No non repeating character found."<<endl;
    }
    else{
        cout<<"The first non repeating character is:"<<result<<endl;
    }
}