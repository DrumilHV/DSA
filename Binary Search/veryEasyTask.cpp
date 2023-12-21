#include<bits/stdc++.h>

using namespace std;

bool good(int n, int x, int y, int mid){
    return (mid/x) + (mid/y) >= (n-1);
}
void veryEasyTask(int n, int x, int y){
    int start = 0, end = n,ans = 0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(good(n,x,y,mid)){
            end = mid - 1;
            ans = mid;
        }else{
            start = mid + 1;
        }
    }
    cout<<min(x,y)+ans;
    
}

int main(){
    veryEasyTask(100,100,1);
    return 0;
}