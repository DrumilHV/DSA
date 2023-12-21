#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int f(int i, vector<int> &n){
    if(i==n.size()-1){
        return 0;
    }
    if(i==n.size()-2){
        return f(i+1,n)+abs(n[i]-n[i+1]);
    }
    return min(  f(i+1,n)+abs(n[i]-n[i+1]), f(i+2,n)+abs(n[i]-n[i+2])   );
}

int main(){
    int arr[] =  {10};
    vector<int> n(arr,arr+sizeof(arr) / sizeof(arr[0]));
    cout<<f(0,n)<<" is the leaset cost.";
    return 0;
}