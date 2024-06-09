#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> dp;
int f(vector<int> & arr, int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return dp[n] = abs(arr[2]-arr[1]);
    }
    if(dp[n]!= -1) return dp[n];
    return dp[n] = min(f(arr,n-1) + abs(dp[n-1]-dp[n]),f(arr,n-1) + abs(dp[n-2]-dp[n]) );
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n+1);
    dp.clear();
    dp.resize(100005, -1);
    for(int i=1;i<n;i++){
        cin>>arr[i];
        }

    cout<<f(arr, n);
    return 0;
}