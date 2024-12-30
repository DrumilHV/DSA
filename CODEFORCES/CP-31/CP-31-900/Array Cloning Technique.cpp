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
    int n;
    cin>>n;
    int a[n];
    bool allSame = true;
    map<int, int> mp;
    int maxo = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]!=a[0]){
            allSame = false;
        }
        mp[a[i]]++;
        maxo = max(maxo, mp[a[i]]);
    }
    if(allSame|| n==1){
        cout<<"0\n";
        return;
    }
    int ans = 0;
    int makeS = maxo;
    // cout<<maxo<<" ";
    while(makeS<n){
        int temp = min(makeS, n-makeS);
        // cout<<makeS<<" "<<temp<<" ";
        makeS += temp;
        ans += 1+ temp;
    }
    cout<<ans<<"\n";
    return ;


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
