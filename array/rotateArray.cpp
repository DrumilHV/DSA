#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[],int n, int k){
    int temp[n];
    for(int i = 0;i<n;i++){
        temp[(i-k)%n] = arr[i];
        cout<<"number: "<<temp[(i-k)%n]<<" index:  "<<((i-k)%n)<<" arr[i] "<<arr[i]<<" i: "<<i<<endl;
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        arr[i] = temp[i];
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}