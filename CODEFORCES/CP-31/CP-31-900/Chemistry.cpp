#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

void solve(int n, int k ,string s){
    map<char, int> mp;
    int odd = 0, even = 0;
    for(int i =0;i<n;i++){
        mp[s[i]]++;

    }
    for(auto i:mp){
        if(i.ss % 2 == 1){
            odd++;
        }else{
            even++;
        }
    }
    if(odd - k > 1 ){
        cout<<"NO"<<endl;
        return ;
    }
    cout<<"YES"<<endl;



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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        solve(n,k, s);
    }
    return 0;
}