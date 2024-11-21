// To find all elements in the array that appear more than once
// Time Complexity -> O(n^2)
#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void moreThanOnce(int arr[],int n){
    int temp[100]; // a an array to store the no of times an element appears
    int idx=0;
    int temp_size=0;
    bool countedAlready[100]={false};
    for(int i=0;i<n;i++){
        int count=0;
        if(countedAlready[i]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>0){
            temp[idx++]=arr[i];
        }
    }

    printArray(temp,idx);
}

int main(){
    int arr[10]={1,2,3,4,5,1,4,2,7,9};
    cout<<"Elements that appear more than once are:"<<endl;
    moreThanOnce(arr,10);
}