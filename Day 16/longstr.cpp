// To find the longest substring without repeating characters

#include<iostream>
#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;

int longSubStr(string s){
    int left=0,maxLen=0;
    unordered_set<char> set;

    for(int right=0;right<s.size();right++){
        while(set.find(s[right])!=set.end()){
            set.erase(s[left]);
            left++;
        }

        set.insert(s[right]);
        maxLen=max(maxLen,right-left+1);
    }

    return maxLen;
}
int main(){
    string s="abcabcbb";
    cout << "Longest substring without repeating characters: " << longSubStr(s) << endl;
    return 0;
}