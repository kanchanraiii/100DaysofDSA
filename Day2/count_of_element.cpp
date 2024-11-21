//To count the occurrences of a given element in an array
#include<iostream>
using namespace std;

//Time complexity -> O(n)
int countOfElement(int arr[],int num,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={1,0,2,3,1,5,6,7,1,0,6,7,2,3,5,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int countOfOne=countOfElement(arr,1,n);
    int countOfZero=countOfElement(arr,0,n);
    cout<<"One occurrs "<<countOfOne<<" times"<<endl;
    cout<<"Zero occurrs "<<countOfZero<<" times"<<endl;

}