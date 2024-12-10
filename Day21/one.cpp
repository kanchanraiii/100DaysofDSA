#include <iostream>
#include <vector>
using namespace std;

class Heap {
    vector<int> heap;
    bool isMinHeap;

public:
    Heap(bool minHeap = false) : isMinHeap(minHeap) {}

    void insert(int val) {
        heap.push_back(val);
        int idx = heap.size() - 1;
        int parent = (idx - 1) / 2;
        while (idx > 0 && compare(heap[idx], heap[parent])) {
            swap(heap[idx], heap[parent]);
            idx = parent;
            parent = (idx - 1) / 2;
        }
    }

    int extractTop() {
        if (heap.empty()) return -1;
        int top = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapify(0);
        return top;
    }

    void display() {
        for (int val : heap) cout << val << " ";
        cout << endl;
    }

private:
    bool compare(int child, int parent) {
        return isMinHeap ? child < parent : child > parent;
    }

    void heapify(int idx) {
        int left = 2 * idx + 1, right = 2 * idx + 2, extreme = idx;
        if (left < heap.size() && compare(heap[left], heap[extreme])) extreme = left;
        if (right < heap.size() && compare(heap[right], heap[extreme])) extreme = right;
        if (extreme != idx) {
            swap(heap[idx], heap[extreme]);
            heapify(extreme);
        }
    }
};

int main() {
    Heap maxHeap(false), minHeap(true);
    vector<int> values = {10, 20, 5, 6, 1, 8};

    for (int val : values) {
        maxHeap.insert(val);
        minHeap.insert(val);
    }

    cout << "Max Heap: ";
    maxHeap.display();

    cout << "Min Heap: ";
    minHeap.display();

    return 0;
}
