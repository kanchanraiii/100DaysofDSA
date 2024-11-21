//To rotate an array to the left by k postions
#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

//using temperorary array , takes O(n) space, time complexity is O(n);
void rotate1(int arr[],int n,int k){
    int j=0;
    int temp[100];
    for(int i=k;i<n;i++){
        temp[j++]=arr[i];
    }
    for(int i=0;i<k;i++){
        temp[j++]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}


// using the reversal technique take O(1) space, and time complexity is O(n)
void rotate2(int arr[],int n,int k){
       k=k%n;
       reverse(arr,0,k-1);
       reverse(arr,k,n-1);
       reverse(arr,0,n-1);
       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       }
       cout<<endl;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<"The Rotated Array by the two methods is:"<<endl;
    rotate1(arr,6,2);
    rotate2(arr,6,2);
}