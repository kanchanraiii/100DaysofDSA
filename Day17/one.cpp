#include <unordered_map>
#include<iostream>
#include <vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefix_count;
    prefix_count[0] = 1;
    int current_sum = 0, count = 0;
    for (int num : nums) {
        current_sum += num;
        if (prefix_count.count(current_sum - k)) {
            count += prefix_count[current_sum - k];
        }
        prefix_count[current_sum]++;
    }
    return count;
}

int main(){
    vector<int> nums={12,3,4,5,-1,4,5};
    int k=5;
    int res=subarraySum(nums,k);
    cout<<"The subarrays with given sum are:"<<res<<endl;


}