#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector
int dx[] = {-1, 1, -1, 1};
int dy[] = {-1, -1, 1, 1};
void solve(int a,int b,int x1,int y1,int x2,int y2){
    set<pair<int,int>> st1, st2;
    for(int j = 0; j < 4; j++){
        st1.insert({x1+dx[j]*a, y1+dy[j]*b});
        st1.insert({x1+dx[j]*b, y1+dy[j]*a});
        st2.insert({x2+dx[j]*a, y2+dy[j]*b});
        st2.insert({x2+dx[j]*b, y2+dy[j]*a});
    }
    int ans = 0;
        for(auto x : st1)
            if(st2.find(x) != st2.end())
                ans++;
        cout << ans << '\n';
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
        int a,b,xk, yk, xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        solve(a,b,xk, yk, xq,yq);
    }
    return 0;
}

