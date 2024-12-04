#include<iostream>
using namespace std;

int recursiveBin(int arr[],int low,int high,int target){
        if(low>high){
            return -1;
        }
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
           recursiveBin(arr,low,mid-1,target);
        }
        else{
           recursiveBin(arr,mid+1,high,target);
        }

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
    int res=recursiveBin(arr,0,10,101);
    if(res==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<res;
    }
}