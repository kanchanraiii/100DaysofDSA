//To merge two sorted arrays

#include<iostream>
using namespace std;

// Time Complexity -> O(n), Space Complexity -> O(n)
void merge(int arr1[],int arr2[],int n1,int n2){
    int res[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1 || j<n2){
        if(arr1[i]<=arr2[j]){
            res[k++]=arr1[i];
            i++;
        }
        else{
            res[k++]=arr2[j];
            j++;
        }
    }
    cout<<"Merging two arrays in sorted manner:"<<endl;
    for(int i=0;i<k;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[8]={0,1,1,6,7,45,67,99};
    int arr2[9]={3,4,5,8,9,33,78,90,100};
    merge(arr1,arr2,8,9);
}
