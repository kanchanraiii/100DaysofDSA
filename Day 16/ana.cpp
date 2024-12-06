// To find all anagrams of a string in another string problem.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    int len_s = s.length(), len_p = p.length();

    if (len_p > len_s) return result;

    unordered_map<char, int> p_count;
    for (char ch : p) {
        p_count[ch]++;
    }

    unordered_map<char, int> s_count;

    for (int i = 0; i < len_p; ++i) {
        s_count[s[i]]++;
    }

    if (s_count == p_count) {
        result.push_back(0);
    }

    for (int i = len_p; i < len_s; ++i) {
        s_count[s[i]]++;
        s_count[s[i - len_p]]--;

        if (s_count[s[i - len_p]] == 0) {
            s_count.erase(s[i - len_p]);
        }

        if (s_count == p_count) {
            result.push_back(i - len_p + 1);
        }
    }

    return result;
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> result = findAnagrams(s, p);

    cout << "Anagram indices: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}



