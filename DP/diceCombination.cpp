#include<bits/stdc++.h>

#define ll long long
#define Mod 1000000007
using namespace std;

ll f(int n, vector<ll> & dp){
    if(n==0){
        return 1;
    }
    if(dp[n] != -1) return dp[n];
    ll ans = 0;
    for(int i =1;i<=6;i++){
        if(n-i < 0) break;
        ans = (ans + f(n-i, dp));
    }
    cout<<ans<<endl;
    return dp[n] = ans;
}
int main(){
    int n ;
    cin>>n;

    vector<ll> dp(n, -1);
    cout<<f(n, dp);
    
    return 0;
}