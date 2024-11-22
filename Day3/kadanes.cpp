// To implement kadane's algorithm to find maximum subarray sum
#include<iostream>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int max_sum = arr[0], curr_sum = arr[0];
    
    for(int i = 1; i < n; i++) {
        curr_sum = max(arr[i], curr_sum + arr[i]);
        max_sum = max(max_sum, curr_sum);
    }
    
    return max_sum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Maximum subarray sum is " << maxSubArraySum(arr, n) << endl;
    return 0;
}
