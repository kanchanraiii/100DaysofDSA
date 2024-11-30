//  Solve the "sort an array of 0s, 1s, and 2s" problem.

#include<iostream>
using namespace std;

void sort012(int arr[],int size){
    int low = 0;
    int mid = 0;
    int high = size-1;
    while(mid<=high){
        if(arr[mid]==0){
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

int main(){
    int arr[] = {0,1,2,0,1,2};
    cout<<"Array before sorting: ";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after sorting: ";
    int size = sizeof(arr)/sizeof(arr[0]);
    sort012(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}