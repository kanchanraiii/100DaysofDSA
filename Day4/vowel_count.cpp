// To count the numbe rof vowels and consonants in a string
#include<iostream>
using namespace std;

void count(string s){
    int size=s.size();
    int consonants=0,vowels=0;
    for(char c:s){
        if(c== 'a' || c=='e' || c=='i' || c=='o' || c=='u'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
    cout<<"Number of vowels:"<<vowels<<endl;
    cout<<"Number of consonants:"<<consonants;
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    count(s);
}