// To print all permutaions of an array

#include<iostream>
using namespace std;

void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void permutation(int arr[],int size,int indx){
    if(indx==size){
        print(arr,size);
    }

    for(int i=indx;i<size;i++){
        swap(arr[indx],arr[i]);
        permutation(arr,size,indx+1);
        swap(arr[indx],arr[i]);
    }
}

int main(){
    int arr[]={1,2,3};
    int size=3;
    int indx=0;
    permutation(arr,size,indx);
}