// To find maximum subarray of length 'k' in an array

#include<vector>
#include<iostream>
using namespace std;

void display(vector<int> nums,int start,int k){
    for(int i=start;i<start+k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void maxSubArray(vector<int> prices,int k){

    int sum=0,maxPrice=0,start=0;

    // finding the sum of first k elements
    for(int i=0;i<k;i++){
        sum+=prices[i];
    }

    maxPrice=sum;

    // finding the max subarray using sliding window
    for(int i=k;i<prices.size();i++){
        sum+=prices[i]-prices[i-k];
        if(sum>maxPrice){
            maxPrice=sum;
            start=i-k+1;
        }
    }
     
    display(prices,start,k);
    cout<<"The maximum subarray sum is:"<<maxPrice<<endl; 
}

int main(){
    vector<int> prices={2,3,4,5,6,7,7,8,9};
    cout<<"The array is:"<<endl;
    for(int i=0;i<prices.size();i++){
        cout<<prices[i]<<" ";
    }
    cout<<endl;
    int k=4;
    cout<<"Max sum subarray:"<<endl;
    maxSubArray(prices,k);
}


