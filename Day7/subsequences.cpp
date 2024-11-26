// prnt allsubsequences of a string

#include <iostream>
using namespace std;

void printSubsequences(string input, string output) {
    if (input.empty()) {
        cout << output << endl;
        return;
    }
    printSubsequences(input.substr(1), output + input[0]);
    printSubsequences(input.substr(1), output);
}

int main() {
    string input = "abc";
    string output = "";
    printSubsequences(input, output);
    return 0;
}
