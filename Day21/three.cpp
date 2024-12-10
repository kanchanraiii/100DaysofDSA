#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Element {
    int value, row, col;
    Element(int v, int r, int c) : value(v), row(r), col(c) {}
    bool operator>(const Element& other) const { return value > other.value; }
};

int kthSmallest(vector<vector<int>>& matrix, int k) {
    priority_queue<Element, vector<Element>, greater<Element>> minHeap;

    for (int i = 0; i < matrix.size(); i++) 
        minHeap.emplace(matrix[i][0], i, 0);

    int count = 0, result = -1;
    while (!minHeap.empty()) {
        Element top = minHeap.top();
        minHeap.pop();
        result = top.value;

        if (++count == k) break;

        if (top.col + 1 < matrix[top.row].size()) 
            minHeap.emplace(matrix[top.row][top.col + 1], top.row, top.col + 1);
    }
    return result;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };
    int k = 8;

    cout << "Kth smallest element is: " << kthSmallest(matrix, k) << endl;

    return 0;
}
