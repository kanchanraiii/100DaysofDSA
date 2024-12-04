// Solve the "minimum number of swaps required to sort an array" problem.

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int minSwaps(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    sort(temp.begin(), temp.end());
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[temp[i]] = i;
    }
    int swaps = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != temp[i]) {
            swaps++;
            int x = arr[i];
            swap(arr[i], arr[mp[arr[i]]]);
            mp[x] = mp[arr[i]];
            mp[arr[i]] = i;
        }
    }
    return swaps;
}

int main() {
    vector<int> arr = {7, 1, 3, 2, 4, 5, 6};
    cout << "The minimum number of swaps required to sort the array is: " << minSwaps(arr) << endl;
    return 0;
}
