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
        int n,k;
        cin>>n>>k;
        int a[n+1];
        int sum = 0;
        vector<int> pre(n+1);
        a[0] = 0;
        pre[0] = 0;
        for(int i=1;i<n+1;i++){
            cin>>a[i];
            sum+=a[i];
            pre[1] = a[1];
            if(i>1){
                pre[i] = pre[i-1]+a[i];
            }
        }
        for(int i=0;i<k;i++){
            int l,r,num;
            cin>>l>>r>>num;
            // for(int i=0;i<n+1;i++){
            //     cout<<pre[i]<<" ";
            // }
            // cout<<"\n";
            // cout<<(sum-pre[r]-pre[l-1]+(r-l+1)*num)<<"\n";
            // cout<<r<<" "<<pre[r]<<" "<<l-1<<" "<<pre[l-1]<<" "<<r-l+1<<"\n";
            long long ans = (sum-pre[r]-pre[l-1]+(r-l+1)*num) ;
            if(ans%2){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}