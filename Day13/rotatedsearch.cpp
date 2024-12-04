#include<iostream>
using namespace std;

int searchInRotatedArray(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target < arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (arr[mid] < target && target <= arr[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    int result = searchInRotatedArray(arr, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
