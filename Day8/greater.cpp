// Solve the "next greater element" problem using a stack.

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    vector<int> result(nums.size());
    stack<int> s;
    for(int i = nums.size() - 1; i >= 0; i--) {
        while(!s.empty() && s.top() <= nums[i]) s.pop();
        result[i] = s.empty() ? -1 : s.top();
        s.push(nums[i]);
    }
    return result;
}

int main() {
    vector<int> nums = {4, 5, 2, 10, 8};
    vector<int> result = nextGreaterElement(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << nums[i] << " -> " << result[i] << endl;
    }
    return 0;
}
