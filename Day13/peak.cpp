// to find the peak element

#include<iostream>
using namespace std;

int peak(int arr[],int size){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=low +(high-low)/2;
        if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid-1]){
            return mid;
        }
        else if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[7]={1,2,3,56,4,3,1};
    int res=peak(arr,7);
    cout<<"The peak element in array is:"<<arr[res];
}