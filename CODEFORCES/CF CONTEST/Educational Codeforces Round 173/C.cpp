#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector


void solve (){
    int n;
    cin>>n;
    int a[n];
    set<int> ans;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int temp = 0;
        for(int j = i;j<n;j++){
            temp+=a[j];
        ans.insert(temp);
        }
        ans.insert(temp);

    }
    ans.insert(0);
    cout<<ans.size()<<endl;
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return ;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
