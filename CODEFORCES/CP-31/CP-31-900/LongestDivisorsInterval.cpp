#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        ll n; scanf("%lld", &n);
        ll cnt(1);
        for(ll p = 2; n % p == 0 && p <= n; p++){
            ++cnt;
            cout<<p<<" ";
        }
        printf("\n%lld\n\n", cnt);
    }
    return 0;
}