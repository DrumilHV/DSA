#include<bits/stdc++.h>
using namespace std;

// int sum(int arr[],int n, int s){
//     if(n==0){
//         return s;
//     }
//     return s+= (*arr)+ sum(arr+1,n-1,s);
// }
// int main(){
//     int a[] = {1,2,3,4,16,100};
//     int n = sizeof(a)/sizeof(a[0]);
//     int s = 0;
//     cout<<sum(a,n,s);
// }
int sum(int arr[],int n, int s){
    if(n==0){
        return s;
        }
    return s += (*arr)+sum(arr+1, n-1, s);
}
int sumPro(int i,int n,  int arr[], int sum){
    if(i==n){
        return 0;
    }
    cout<<sum<<" "<<arr[i]<<endl;
    return sum =  arr[i] + sumPro(i+1, n, arr, sum);
}
int main(){
    int a[] = {1,2,3,4,16,100, 10,100};
    int n = sizeof(a)/sizeof(a[0]);
    int s = 0;
    cout<<sumPro(0,n,a,s);
    return 0;
    }  
