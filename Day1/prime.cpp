#include<iostream>
using namespace std;
// 4. check if a number is prime or not
void prime(int n){
    int flag=0;
    if(n==0 || n==1){
        cout<<"neither prime nor composite";
    }
    for(int i=2; i<= n/2 ;i++){
        if(n%i==0){
           flag=1;
           break;
        }
    }

    if(flag==0){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}

int main(){
    prime(7);
    prime(8);
    prime(9);
}