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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0, cur = 1;
        for(int i =1;i<n;i++){
            if(s[i]!=s[i-1]){
                cur = 1;
            }else{
                cur++;
            }
            ans = max(ans,cur);
        }
        cout<<ans+1<<"\n";
    }
    return 0;
}
