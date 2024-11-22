#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int>& arr, int n) {
    vector<int> pos;
    vector<int> neg;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }

    int pos_size = pos.size();
    int neg_size = neg.size();
    
    int i = 0;
    if(pos_size > neg_size) {
        for(i = 0; i < neg_size; i++) {
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int idx = neg_size * 2;
        for(i = neg_size; i < pos_size; i++) {
            arr[idx++] = pos[i];
        }
    } else {
        for(i = 0; i < pos_size; i++) {
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int idx = pos_size * 2;
        for(i = pos_size; i < neg_size; i++) {
            arr[idx++] = neg[i];
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, -3, -4, 5, -6, -7, 8};
    int n = arr.size();
    cout<<"The rearranged array is:"<<endl;
    rearrangeArray(arr, n);
    return 0;
}
