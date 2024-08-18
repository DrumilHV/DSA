#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector


int solve(int n, string x, int m, string s){
    int ans = 0;
    for(int i = 0; i < 5; i++){
        
        if(x.find(s)!=string::npos){
            return i;
            break;
        }
        ans++;
        x.append(x);
    
    }
    if(x.find(s)==string::npos){
            return -1;
    }
    return ans;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,x;
        cin>>x>>s;
        cout<<solve(n,x,m,s)<<endl;
    }


}