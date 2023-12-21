#include<bits/stdc++.h>
using namespace std;

int Find(int arr[],int n, int s,int size){
   if(n==0){
    return -1;
   }
   if(s==(*arr)){
    return size-n;
   }else{
    return Find(arr+1,n-1,s,size);
   }
}
int main(){ 
    int a[] = {1,2,3,4,16,100};
    int n = sizeof(a)/sizeof(a[0]);
    int s = 4;
    cout<<Find(a,n,s,n);
}