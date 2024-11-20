#include<iostream>
using namespace std;
//1. find the factorial of a number using loop
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int res=factorial(n);
    cout<<"Factorial is "<<res;
}