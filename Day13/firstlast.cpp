#include <iostream>
using namespace std;

void binarySearch(int arr[], int target, int size) {
    int low = 0, high = size - 1;
    int first = -1, last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << "The first and last indexes of " << target << " are " << first << " and " << last << endl;
}

int main() {
    int arr[8] = {1, 2, 3, 4, 4, 5, 6, 7};
    int target = 4;

    cout << "The array is:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    binarySearch(arr, target, 8);
    return 0;
}
