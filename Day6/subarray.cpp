// Write a program to find the contiguous subarray with the maximum sum in O(n) time.

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int n = arr.size();
    int max_sum = arr[0];
    int curr_sum = arr[0];
    for (int i = 1; i < n; i++) {
        curr_sum = max(arr[i], curr_sum + arr[i]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int main(){
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << "The maximum sum of a contiguous subarray is: " << maxSubarraySum(arr) << endl;
    return 0;
}