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
int f_f(int i, vector<int> & arr){
    if(i==0){
        return 0;
    }
    if(i==1){
        return abs(arr[0]-arr[1]);
    }
    return min(  f_f(i-1,arr)+abs(arr[i-1]-arr[i]), f_f(i-2, arr)+abs(arr[i]-arr[i-2]));
}
int main(){
    int size;
    cin>>size; 
    vector<int> n(size);
    for(int i=0;i<size;i++){
        cin>>n[i];
    }
    cout<<f_f(size-1,n)<<" is the leaset cost.";
    return 0;
}