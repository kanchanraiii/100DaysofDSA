#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> kLargestElements(vector<int>& arr, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int val : arr) {
        minHeap.push(val);
        if (minHeap.size() > k) minHeap.pop();
    }

    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top());
        minHeap.pop();
    }
    return result;
}

int main() {
    vector<int> arr = {1, 23, 12, 9, 30, 2, 50};
    int k = 3;

    vector<int> result = kLargestElements(arr, k);
    cout << "K largest elements are: ";
    for (int val : result) cout << val << " ";
    cout << endl;

    return 0;
}
