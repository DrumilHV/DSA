#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

void solve(int n, int k, int x){
    if(k==1){
        cout<<"NO";
        return ;
    }
    if(x!=1){
        cout<<"YES"<<"\n";
        cout<<n<<"\n";
        for(int i =1;i<=n;i++){
            cout<<1<<" ";
        }
        return ;
    }
    if(k==1){
        cout<<"NO";
    }
    if(k==2){
        if(x==1 && n%2==1){
            cout<<"NO";
            return ;
        }
        cout<<"YES"<<"\n";
        cout<<n/2<<"\n";
        for(int i =1;i<=n/2;i++){
            cout<<2<<" ";
        }
        return ;
    }
    cout<<"YES"<<"\n";
    cout<<n/2<<"\n";
    if(n%2==1){
        cout<<3<<" ";
        n-=3;
    }
    while (n)
    {
        cout<<2<<" ";
        n-=2;
    }
    return ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k, x;
        cin>>n>>k>>x;
        solve( n,  k,  x);
        cout<<endl;
    }
    return 0;
}
