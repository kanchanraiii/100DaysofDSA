// To rotate an array to the right by k elements

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rightRotate(vector<int> &arr, int k) {
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rightRotate(arr, k);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}