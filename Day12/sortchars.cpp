// Solve the "sort characters by frequency" problem.
 
#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    vector<string> bucket(s.size() + 1, "");
    for (auto& it : freq) {
        char c = it.first;
        int n = it.second;
        bucket[n].append(n, c);
    }
    string res;
    for (int i = s.size(); i > 0; i--) {
        if (!bucket[i].empty()) {
            res.append(bucket[i]);
        }
    }
    return res;
}

int main() {
    string s = "tree";
    cout << "The sorted characters by frequency are: " << frequencySort(s) << endl;
    return 0;
}

