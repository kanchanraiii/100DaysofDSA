// Solve the "allocate minimum number of pages" problem using binary search.
#include<iostream>
using namespace std;

bool canAllocate(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int currentSum = 0;
    
    for(int i = 0; i < n; i++){
        currentSum += arr[i];
        if(currentSum > mid){
            studentCount++;
            currentSum = arr[i];
            if(studentCount > m) return false;
        }
    }
    return true;
}

int allocatePages(int arr[], int n, int m){
    int sum = 0;
    int maxPages = 0;
    
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxPages = max(maxPages, arr[i]);
    }

    int low = maxPages, high = sum, result = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(canAllocate(arr, n, m, mid)){
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main(){
    int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout << "Minimum allocated pages:"<<allocatePages(arr, n, m) << endl;
    return 0;
}
