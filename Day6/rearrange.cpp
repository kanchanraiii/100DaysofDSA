// Rearrange an array such that the first element is the largest, the second is the smallest, 
//the third is the second largest, and so on. Solve this in O(n) time using no extra space.

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<int> &arr) {
    int n = arr.size();
    int max_idx = n - 1;
    int min_idx = 0;
    int max_elem = arr[n - 1] + 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] += (arr[max_idx] % max_elem) * max_elem;
            max_idx--;
        } else {
            arr[i] += (arr[min_idx] % max_elem) * max_elem;
            min_idx++;
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] / max_elem;
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    rearrange(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
