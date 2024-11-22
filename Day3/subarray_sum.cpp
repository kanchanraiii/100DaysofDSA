// To find a subarray with a given sum
#include<iostream>
using namespace std;

bool subarraySum(int arr[], int n, int target) {
    int start = 0, curr_sum = 0;
    
    for(int end = 0; end < n; end++) {
        curr_sum += arr[end];
        
        while(curr_sum > target && start < end) {
            curr_sum -= arr[start];
            start++;
        }
        
        if(curr_sum == target) {
            cout << "Subarray found from index " << start << " to " << end << " with target"<<" "<<target<<endl;
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 12;
    
    if(!subarraySum(arr, n, target)) {
        cout << "No subarray found" << endl;
    }
    
    return 0;
}
