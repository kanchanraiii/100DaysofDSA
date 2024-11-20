#include<iostream>
using namespace std;
// 3. check if a number is odd or even
void check_odd_even(int num){
    if(num%2==0){
        cout<<num<<" is even";
    }
    else{
        cout<<num<<" is odd";
    }
}

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    check_odd_even(num);
}