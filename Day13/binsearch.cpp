// To implement binary search and analyze its time complexity
// Time complexity-> O(logn)

#include<iostream>
using namespace std;

int binarySearch(int arr[],int target,int size){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>target){
            high=mid-1;

        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main(){
    //sorted array
    int arr[10]={34,45,56,67,78,90,101,123,124,144};
    int target=101;
    cout<<"The array is:"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int res=binarySearch(arr,target,10);
    if(res==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<res;
    }
}