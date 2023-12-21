#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sum(vector<int> &n, int i){
    if(i>=n.size()){
        return 0;
    }
    
    return sum(n, i+1)+n[i];
}

int main(){
    int arr[] =  {10, 30,40,50,20};
    vector<int> n(arr,arr+sizeof(arr) / sizeof(arr[0]));
    cout<<sum(n,0)<<" is the sum\nlol !!.";
    return 0;
}