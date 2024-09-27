#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector


string solve(ll n, ll k){
    for(ll i = 0 ;i<=2 ;i++){
        if(n - i * k >= 0 and (n - i * k) % 2 == 0){
            return "yes";
        }
    }
    return "no";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        cout<<solve( n,  k)<<endl;
    }
    return 0;
}