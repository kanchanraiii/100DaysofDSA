// To print all the subsets of a set

#include<iostream>
#include<vector>
using namespace std;

void subset(int indx, vector<int>ds,int arr[],int size){
    if(indx==size){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;

        if(ds.size()==0){
            cout<<"null";
        }
        return;
    }

    //take the element
    ds.push_back(arr[indx]);
    subset(indx+1,ds,arr,size);
    ds.pop_back();

    //not taking the element
    subset(indx+1,ds,arr,size);

}


int main(){
    cout<<"All the subsets of the given array are:"<<endl;
    int arr[]={3,1,2};
    int size=3;
    vector<int>ds;
    subset(0,ds,arr,size);
}