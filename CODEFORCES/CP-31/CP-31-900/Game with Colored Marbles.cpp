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
    int arr[n];
    map<int, int> mp, a, b;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    map<int, vector<int> > rmap;
    for(auto i: mp){
        rmap[i.second].push_back(i.first);
    }
    bool flag = true;
    while(!rmap.empty()){
        if(flag){
                auto x = rmap.begin()->second;
            if(x.size()==1){
                a[x[0]]++;
                mp[x[0]]--;
                if(mp[x[0]]==0){
                    rmap.erase(rmap.begin());
                }
            }else{
                // auto x = rmap.begin()->second;
                int y = x[0];
                a[y]++;
                mp[y]--;
                if(mp[y]==0){
                    mp.erase(y);
                    rmap.erase(rmap.begin());
                }
            }
            
        }else{
            auto x = rmap.begin()->second;
            if(x.size()==1){
                b[x[0]]++;
                mp[x[0]]--;
                if(mp[x[0]]==0){
                    rmap.erase(rmap.begin());
                }
            }else{
                // auto x = rmap.begin()->second;
                int y = x[0];
                b[y]++;
                mp[y]--;
                if(mp[y]==0){
                    mp.erase(y);
                    rmap.erase(rmap.begin());
                }
            }
        }
        flag = !flag;
    }
    int ans = 0;
    for(auto i: a){
        cout<<i.first<<" "<<i.second<<endl;
        ans+= i.second;
        if(b.find(i.first)==b.end()){
            ans++;
        }
    }
    cout<<endl<<ans<<"\n\n";
    
    
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