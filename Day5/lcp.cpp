#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }

    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++) {
        string s = strs[i];
        string temp = "";
        for (int j = 0; j < prefix.length() && j < s.length(); j++) {
            if (prefix[j] == s[j]) {
                temp += prefix[j];
            } else {
                break;
            }
        }
        prefix = temp;
        if (prefix.empty()) {
            break;
        }
    }

    return prefix;
}

int main() {
    vector<string> strs;
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    cin.ignore();
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        strs.push_back(s);
    }
    string str = longestCommonPrefix(strs);
    cout << "The longest common prefix is: " << str << endl;
}
