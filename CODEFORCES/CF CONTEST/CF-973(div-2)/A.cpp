#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int solve(int n, int x, int y ){
    if(n==0) return 0;
    if( min(x,y) >= n){
        return 1;
    }
    int low = min(x,y);
    int t = 0;

    t = (n+low-1)/low;

    return t;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        cout<<solve(n,x,y)<<endl;        
    }
}