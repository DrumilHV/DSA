#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {10,7,4,2,9,7,10,11,3,2};
    stack<int> s;
    int n = sizeof(arr)/sizeof(arr[0]);
    int output[n];
    s.push(0);
    reverse(arr, arr+n);
    for(int i =0;i<n;i++){
        while(!s.empty() && arr[i]<=arr[s.top()]){
            output[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
        
    }
    while(!s.empty()){
        output[s.top()] = -1;
        s.pop();
    }
    reverse(output, output+n);
    for(int i =0;i<n;i++){
        cout<<output[i] << "   ";
    }
    return 0;
}