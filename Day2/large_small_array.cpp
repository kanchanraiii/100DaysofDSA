//To find the largest and smallest element in an array
#include<iostream>
using namespace std;

// Time complexity -> O(n)
void max_min(int arr[],int n){
    int min=INT16_MAX;
    int max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Smallest Element is:"<<min<<endl;
    cout<<"Largest Element is:"<<max<<endl;
}

int main(){
    int arr[]={10,3,24,33,0,12,56,78,32,-1,78};
    int n=sizeof(arr) / sizeof(arr[0]);
    max_min(arr,n);
}