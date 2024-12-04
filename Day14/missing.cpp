// To find the smallest missing positive integer in an unsorted array

#include<iostream>
using namespace std;
int missingPositive(int arr[],int size){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==mid+1){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low+1;
}

int main(){
    int arr[4]={2,4,0,5};
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int res=missingPositive(arr,4);
    cout<<"The missing positive number is: "<<res;
}