#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Element {
    int value, arrayIndex, elementIndex;
    Element(int v, int ai, int ei) : value(v), arrayIndex(ai), elementIndex(ei) {}
    bool operator>(const Element& other) const { return value > other.value; }
};

vector<int> mergeKSortedArrays(vector<vector<int>>& arrays) {
    priority_queue<Element, vector<Element>, greater<Element>> minHeap;
    vector<int> result;

    for (int i = 0; i < arrays.size(); i++) 
        if (!arrays[i].empty()) 
            minHeap.emplace(arrays[i][0], i, 0);

    while (!minHeap.empty()) {
        Element top = minHeap.top();
        minHeap.pop();
        result.push_back(top.value);

        if (top.elementIndex + 1 < arrays[top.arrayIndex].size()) 
            minHeap.emplace(arrays[top.arrayIndex][top.elementIndex + 1], top.arrayIndex, top.elementIndex + 1);
    }

    return result;
}

int main() {
    vector<vector<int>> arrays = {
        {1, 5, 9},
        {2, 6, 8},
        {3, 7, 10}
    };

    vector<int> result = mergeKSortedArrays(arrays);
    cout << "Merged array: ";
    for (int val : result) cout << val << " ";
    cout << endl;

    return 0;
}
