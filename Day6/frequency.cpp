// Write a program to count the frequency of each element in an array in O(n) time without using extra space (modify the array temporarily if needed)

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void countFreq(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        arr[arr[i] % n] += n;
    }
    for (int i = 0; i < n; i++) {
        cout << i << " occurs " << arr[i] / n << " times" << endl;
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 2, 1, 3, 2, 3, 4, 1, 2, 3, 4};
    countFreq(arr);
    return 0;
}
