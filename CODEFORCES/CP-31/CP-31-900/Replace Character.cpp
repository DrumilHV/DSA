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
    string s;
    cin>>s;
    if(n==1){
        cout<<s<<endl;
        return ;
    }
    map<int, int> mp;
    int mx = INT_MIN, mn = INT_MAX;
    char maxC, minC;
    for(int i=0;i<n;i++){
        mp[s[i]-'a']++;
    }
    for(auto i:mp){
        if(i.second>mx){
            maxC = i.ff+'a';
        }
        if(i.second<=mn){
            minC = i.ff+'a';
        }
        mx = max(mx, i.second);
        mn = min(mn, i.second);

    }
    if(mp.size()==1){
        cout<<s<<endl;
        return;
    }
//    cout<<minC<<" "<<maxC<<" \n";
   for(int i=0;i<n;i++){
        if(s[i]==minC){
            s[i] = maxC;
        break;
        }
   }
    cout<<s<<endl;
    return;


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
