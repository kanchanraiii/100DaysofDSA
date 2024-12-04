// To find the number of times an array is rotated

#include<iostream>
using namespace std;

int noOfTimeArrayRotated(int arr[],int size){
    int low=0;
    int high=size-1;

    while(low<=high){
        if(arr[low]<=arr[high]){
            return 0;
        }
        int mid=(low+high)/2;
        // to make sure we dont go out of bounds
        int prev=(mid-1+size)%size;
        int next=(mid+1)%size; 
        if(arr[mid]<arr[prev] && arr[mid]<arr[next]){
            return mid;
        }
        else if(arr[low]<=arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}

int main(){
    int arr[8]={4,5,6,7,8,1,2,3};
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int res=noOfTimeArrayRotated(arr,8);
    cout<<"Array has been roated for "<<res<<" steps";
    
}