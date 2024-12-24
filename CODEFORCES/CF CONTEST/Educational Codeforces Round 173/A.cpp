#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

void solve(){
    long long n;
    cin>>n;
    if(n<=3){
        cout<<1<<endl;
        return;
    }
    int ans = 1;
    while(n>3){
        n = n/4;
        ans *= 2;
        if(n<4){
            break;
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}