#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool sorted = isSorted(arr+1,size-1);
        return sorted;
    }
}
int main(){
    int a[] = {3,4,5,5,6,7,8,9};
    int size = sizeof(a)/sizeof(a[0]);
    if(isSorted(a,size)){
        cout<<"sorted!!";
    }else{
        cout<<"not sorted!!";

    }
    return 0;
}