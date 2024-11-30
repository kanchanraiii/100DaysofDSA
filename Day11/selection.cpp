// To implement selection sort
// Time Complexity -> O(n^2)
#include<iostream>
using namespace std;

void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
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
    selectionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}