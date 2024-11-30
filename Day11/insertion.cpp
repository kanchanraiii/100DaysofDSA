//  Implement Insertion Sort and count the number of shifts/swaps during sorting.
// Time Complexity -> O(n^2)

#include<iostream>
using namespace std;

int insertionSort(int arr[],int size){
    int count = 0;
    for(int i=1;i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
            count++;
        }
        arr[j+1] = key;
    }
    return count;
}

int main(){
    int arr[] = {5,4,3,2,1};
    cout<<"Array before sorting: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after sorting: ";
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = insertionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Number of shifts: "<<count;
    return 0;
}
