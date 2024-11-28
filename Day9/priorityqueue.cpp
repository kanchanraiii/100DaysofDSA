#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class PriorityQueue {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] > heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int index) {
        int size = heap.size();
        while (true) {
            int largest = index;
            int left = 2 * index + 1;
            int right = 2 * index + 2;

            if (left < size && heap[left] > heap[largest]) {
                largest = left;
            }
            if (right < size && heap[right] > heap[largest]) {
                largest = right;
            }
            if (largest != index) {
                swap(heap[index], heap[largest]);
                index = largest;
            } else {
                break;
            }
        }
    }

public:
    void enqueue(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    void dequeue() {
        if (heap.empty()) return;
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    int peek() {
        if (!heap.empty()) return heap[0];
        throw runtime_error("Priority queue is empty");
    }

    bool empty() {
        return heap.empty();
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10);
    pq.enqueue(30);
    pq.enqueue(20);

    cout << "Priority Queue (Max-Heap): ";
    while (!pq.empty()) {
        cout << pq.peek() << " ";
        pq.dequeue();
    }

    return 0;
}
