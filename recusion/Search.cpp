#include<bits/stdc++.h>

using namespace std;

bool search(int a[], int i,int n, int x){
    if(a[i]==x){
        // found = true;
        return true;
    }
    if(i<n){
        return search(a,i+1,n, x );
    }
    return false;
}

int main(){
    int arr[] = {10,99,18,28, 11, 22,44,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 0;
    if(search(arr, 0, n, x)){
        cout<<"Element found!!";
    }else{
        cout<<"Element not found!!";

    }
}