#include<iostream>
using namespace std;
// 2. print fibonacci series upto 'n' terms
// 0,1,1,2,3,5,8,13,21...n
void fibonacci(int n){   
    int term1=0;
    int term2=1;
    int next=term2+term2;
    cout<<term1<<" "<<term2<<" ";
    for(int i =0;i<n;i++){
        cout<<next<<" ";
        term1=term2;
        term2=next;
        next=term1+term2;
    }
}

int main(){
    //first 10 terms
    fibonacci(10);
}