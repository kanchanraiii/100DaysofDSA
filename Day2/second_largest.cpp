//To find the second largest element in an array
#include<iostream>
#include<climits>
using namespace std;

// Time Complexity -> O(n)
int secondLargest(int arr[],int n){
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
    }
    if(second_largest==INT_MIN){
        return -1;
    }
    return second_largest;
}

int main(){
    int arr1[]={1,2,45,9,78,23,67};
    int arr2[]={1,1,1,1,1,1,1,1,1};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int res1=secondLargest(arr1,n1);
    int res2=secondLargest(arr2,n2);
    cout<<"Second largest in arr1:"<<res1<<endl;
    cout<<"Second largest in arr2:"<<res2<<endl; //-1 if there is no second largest element

}