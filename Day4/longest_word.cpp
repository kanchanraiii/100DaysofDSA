// To find the longest word in a string
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void findLongestWord(string s) {
    stringstream ss(s);
    string word, longestWord;
    int maxLength = 0;

    while (ss >> word) {
        if (word.length() > maxLength) {
            maxLength = word.length();
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;
    cout << "Length: " << maxLength << endl;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    findLongestWord(s);

    return 0;
}
