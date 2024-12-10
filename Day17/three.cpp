#include <vector>
#include<iostream>
using namespace std;

bool findPairWithSum(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) return true;
        else if (sum < target) left++;
        else right--;
    }
    return false;
}

int main(){
    vector<int> nums={1,2,3,4,5};
    int target=9;
    if(findPairWithSum(nums,target)){
        cout<<"Target Exists"<<endl;
    }
    else{
        cout<<"The target does not exist";
    }
}
