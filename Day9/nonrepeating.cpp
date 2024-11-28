// To find the "first non-repeating character in a stream of characters" problem using a queue.

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void firstNonRepeatingCharacter(string s){
    queue<char> q;
    vector<int> freq(26,0);
    for(int i=0;i<s.length();i++){
        q.push(s[i]);
        freq[s[i]-'a']++;
        while(!q.empty()){
            if(freq[q.front()-'a']>1){
                q.pop();
            }
            else{
                cout<<q.front()<<" ";
                break;
            }
        }
        if(q.empty()){
            cout<<-1<<" ";
        }
    }
    cout<<endl;
}

int main(){
    string s="aabc";
    firstNonRepeatingCharacter(s);
    return 0;
}

