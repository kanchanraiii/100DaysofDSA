#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());

    int n = nums1.size();
    
    if(n % 2 != 0) {
        return nums1[n / 2];
    } else {
        return (nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
    }
}

int main() {
    vector<int> nums1 = {1, 3,4,5,6};
    vector<int> nums2 = {2};
    
    cout << "Median: " << findMedianSortedArrays(nums1, nums2) << endl;
    
    return 0;
}
