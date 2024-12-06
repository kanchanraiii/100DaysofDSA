// To find the maximum number of vowels in a substring of size k

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxNoOfVowels(string s,int k){
    int maxVowelCount=0,vowelCount=0;
    for(int i=0;i<k;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vowelCount+=1;
        }
    }

    maxVowelCount=vowelCount;

    for(int i=k;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vowelCount+=1;
        }

         if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u'){
            vowelCount-=1;
        }
    }

    maxVowelCount=max(maxVowelCount,vowelCount);
    return maxVowelCount;

}

int main(){
    string s = "aeiouaeiou";
    int k = 5;
    cout << "Max vowels in a substring of length " << k << " is: " << maxNoOfVowels(s, k) << endl;
    return 0;
}