#include <unordered_map>
#include<iostream>
#include <vector>
using namespace std;

int longestSubarraySumK(vector<int>& nums, int k) {
    unordered_map<int, int> prefix_index;
    prefix_index[0] = -1;
    int current_sum = 0, max_length = 0;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (prefix_index.count(current_sum - k)) {
            max_length = max(max_length, i - prefix_index[current_sum - k]);
        }
        if (!prefix_index.count(current_sum)) {
            prefix_index[current_sum] = i;
        }
    }
    return max_length;
}

int main(){
    vector<int> nums={12,3,4,5,-1,4,5};
    int k=9;
    int res=longestSubarraySumK(nums,k);
    cout<<"The subarrays with given sum are:"<<res<<endl;
}

