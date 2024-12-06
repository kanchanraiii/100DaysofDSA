#include <iostream>
#include <unordered_map>
#include <string>
#include <climits>
using namespace std;

string smallestWindow(string s, string t) {
    if (t.size() > s.size()) return "-1";

    unordered_map<char, int> target_freq, window_freq;
    for (char ch : t) {
        target_freq[ch]++;
    }

    int start = 0, min_length = INT_MAX, min_start = 0, matched = 0;

    for (int end = 0; end < s.size(); end++) {
        char right_char = s[end];
        window_freq[right_char]++;

        if (target_freq.find(right_char) != target_freq.end() && 
            window_freq[right_char] <= target_freq[right_char]) {
            matched++;
        }

        while (matched == t.size()) {
            if (end - start + 1 < min_length) {
                min_length = end - start + 1;
                min_start = start;
            }

            char left_char = s[start];
            window_freq[left_char]--;
            if (target_freq.find(left_char) != target_freq.end() && 
                window_freq[left_char] < target_freq[left_char]) {
                matched--;
            }
            start++;
        }
    }

    return min_length == INT_MAX ? "-1" : s.substr(min_start, min_length);
}

int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";

    string result = smallestWindow(s, t);
    cout << "Smallest window: " << result << endl;

    return 0;
}
