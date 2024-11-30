// Solve the "merge two sorted arrays without extra space" problem.

#include <iostream>
#include <vector>
using namespace std;

void mergeArrays(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size(), m = arr2.size();
    int i = n - 1, j = m - 1, k = n + m - 1;
    arr1.resize(n + m);
    while (j >= 0) {
        if (i >= 0 && arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    cout << "Array 1: ";
    for (int num : arr1) cout << num << " ";
    cout << endl;

    cout << "Array 2: ";
    for (int num : arr2) cout << num << " ";
    cout << endl;

    mergeArrays(arr1, arr2);

    cout << "Array after merging: ";
    for (int num : arr1) cout << num << " ";
    cout << endl;

    return 0;
}
