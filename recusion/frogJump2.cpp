#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int f(int i,int k, vector<int> &n){
    if(i==n.size()-1){
        return 0;
    }
    int minC = INT_MAX;

    for(int j =0; j<k; j++){
        if(i+j <n.size())
        minC = min(minC, f(i+j, k, n)+abs(n[i]-n[j]));
    }

    return minC;
}

int main(){
    int arr[] =  {10, 30,40,50,20};
    vector<int> n(arr,arr+sizeof(arr) / sizeof(arr[0]));
    cout<<f(0,3,n)<<" is the leaset cost.";
    return 0;
}