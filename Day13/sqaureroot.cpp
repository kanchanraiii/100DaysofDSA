// To find the square root of a number using binary search
#include<iostream>
using namespace std;

int squareRoot(int num){
    int low=0;
    int high=num;
    int mid;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid==num){
            return mid;
        }
        else if(mid*mid>num){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return high;
}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Square of "<<num<<" is "<<squareRoot(num)<<endl;
}