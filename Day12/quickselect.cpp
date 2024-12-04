// Solve the "find kth smallest/largest element in an array" problem using Quick Select.

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickSelect(int arr[], int low, int high, int k) {
    if (low < high) {
        int pi = partition(arr, low, high);
        if (pi == k) {
            return arr[pi];
        } else if (pi < k) {
            return quickSelect(arr, pi + 1, high, k);
        } else {
            return quickSelect(arr, low, pi - 1, k);
        }
    }
    return arr[low];
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int k = 3;
    cout << "The " << k << "th smallest element is: " << quickSelect(arr, 0, n - 1, k - 1) << endl;
    return 0;
}