#include<iostream>
using namespace std;

bool canShipCarry(int weights[], int size, int d, int capacity){
    int days = 1;
    int curr_weight = 0;
    for(int i = 0; i < size; i++){
        curr_weight += weights[i];
        if(curr_weight > capacity){
            days++;
            curr_weight = weights[i];
            if(days > d) return false;
        }
    }
    return true;
}

int minDays(int weights[], int size, int d){
    int low = 0, high = 0;
    for(int i = 0; i < size; i++){
        high += weights[i];
        low = max(low, weights[i]);
    }
    
    while(low < high){
        int mid = low + (high - low) / 2;
        if(canShipCarry(weights, size, d, mid)){
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int weights[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int d = 5;
    int size = sizeof(weights) / sizeof(weights[0]);
    int result = minDays(weights, size, d);
    cout << "Minimum capacity required: " << result << endl;
    return 0;
}
