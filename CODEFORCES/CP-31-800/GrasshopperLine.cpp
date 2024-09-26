#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

void solve(int x, int k){
    if(x % k != 0 || k > x || x == 1){
        cout<<1<<endl;
        cout<<x;
        return ;
    }
    cout<<2<<endl;
    cout<<x-k-1<<" "<<k+1;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x, k;
        cin>>x>>k;
        solve( x,  k);
        cout<<endl;
    }
    return 0;
}