// To find the missing number in an array of n-1 elements

#include <iostream>
#include <vector>
using namespace std;

int missingNo(vector<int> &arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (n * (n + 1) / 2) - sum;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 6, 7, 8};
    int n = arr.size() + 1;
    cout << "The missing number is: " << missingNo(arr, n) << endl;
    return 0;
}