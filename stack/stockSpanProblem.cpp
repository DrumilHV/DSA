#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = { 10, 4, 5, 90, 120, 80 };;
    stack<int> s;
    int n = sizeof(arr)/sizeof(arr[0]);
    int output[n];
    s.push(0);
    cout<<"reversed array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    reverse(arr, arr+n);
    for(int i =0;i<n;i++){
        while(!s.empty() && arr[i]>arr[s.top()]){
            output[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
        
    }
    while(!s.empty()){
        output[s.top()] = 1;
        s.pop();
    }
    // for(int i =0;i<n;i++){
    //     output[i] = output[i]-i;
    //     // cout<<output[i]-i << "   ";
    // }
    reverse(output, output+n);
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }
    return 0;
}