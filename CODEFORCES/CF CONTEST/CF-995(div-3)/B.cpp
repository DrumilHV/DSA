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
        int n , a,b,c;
        cin>>n>>a>>b>>c;
        int ans = 0;
        int sum = a+b+c;
        // cout<<n<<" ";
        if(n-sum>=0){
            ans = n/sum;
            n = n%sum;
            ans = ans*3;
        }
        // cout<<n<<" ";
        if(n>0){
            n = n-a;
            ans++;
        }
        // cout<<n<<" ";
        if(n>0){
            n-=b;
            ans++;
        }
        // cout<<n<<" ";
        if(n>0){
            n-=c;
            ans++;
        }
        // cout<<n<<" ";
        cout<<ans<<endl;

    }
    return 0;
}