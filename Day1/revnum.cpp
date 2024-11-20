#include<iostream>
using namespace std;
//5. Reversing a given number
void revnum(int n){
    int org=n;
    int rem=0;
    int rev=0;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    cout<<"Reversed number:"<<rev;
}

int main(){
    revnum(123);
}