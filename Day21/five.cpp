#include <iostream>
#include <queue>
using namespace std;

class MedianFinder {
    priority_queue<int> maxHeap;                          // Left half of the data (lower values)
    priority_queue<int, vector<int>, greater<int>> minHeap; // Right half of the data (higher values)

public:
    void addNum(int num) {
        if (maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }

        // Balance the heaps
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian() {
        if (maxHeap.size() > minHeap.size()) {
            return maxHeap.top();
        } else {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
    }
};

int main() {
    MedianFinder mf;

    mf.addNum(1);
    mf.addNum(2);
    cout << "Median: " << mf.findMedian() << endl; // Output: 1.5

    mf.addNum(3);
    cout << "Median: " << mf.findMedian() << endl; // Output: 2

    mf.addNum(4);
    cout << "Median: " << mf.findMedian() << endl; // Output: 2.5

    mf.addNum(5);
    cout << "Median: " << mf.findMedian() << endl; // Output: 3

    return 0;
}
