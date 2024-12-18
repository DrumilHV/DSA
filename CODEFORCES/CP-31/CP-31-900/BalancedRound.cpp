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
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        
        sort(a, a+n);
        int mx = 0;
        for(int i =1;i<n;i++){
            int lmax = 1;
            while((a[i]-a[i-1])<=k && i<n){
                lmax++;
                i++;
            }
            mx = max(mx, lmax);
        }
        cout<<n-mx<<"\n";
    }
    return 0;
}
