#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n, int s){
    if(n==0){
        return s;
    }
    return s+= (*arr)+ sum(arr+1,n-1,s);
}
int main(){
    int a[] = {1,2,3,4,16,100};
    int n = sizeof(a)/sizeof(a[0]);
    int s = 0;
    cout<<sum(a,n,s);
}