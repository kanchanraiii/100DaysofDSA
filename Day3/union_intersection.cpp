// To find the union and intersection of two arrays
#include<iostream>
using namespace std;

//Array1 - 1,2,3,4,1,3,2,7
//Array2- 2,3,6,9,0,1,3
//Union- 1,2,3,4,1,3,2,7,2,3,6,9,0,1,3

bool isPresent(int arr[],int element,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return true;
        }
    }
    return false;
}
// Time Complexity -> O(n), Space Complexity-> O(n)
void unionArray(int arr1[],int arr2[],int n1,int n2){
    int j=0;
    int res[n1+n2];
    for(int i=0;i<n1;i++){
        res[j++]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        if(!isPresent(res,arr2[i],j)){
            res[j++]=arr2[i];
        }
       
    }

    cout<<"The union of the two arrays is:"<<endl;
    for(int i=0;i<j;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}


// Time Complexity -> O(n), Space Compexity -> O(n)
void intersectionArray(int arr1[],int arr2[],int n1,int n2){
    int res[n1+n2];
    int j=0;
    for(int i=0;i<n1;i++){
        if(isPresent(arr1,arr2[i],n1)){
            res[j++]=arr2[i];
        }
    }

    cout<<"Intersection of the two arrays is:"<<endl;
    for(int i=0;i<j;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[6]={3,4,5,2,1,1};
    int arr2[6]={1,2,7,8,9,0};
    unionArray(arr1,arr2,6,6);
    intersectionArray(arr1,arr2,6,6);
}