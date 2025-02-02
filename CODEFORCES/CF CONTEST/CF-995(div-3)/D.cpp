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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int x,y, sum = 0;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int ans = 0;
        long long int temp = sum;
        // cout<<temp<<" ";
        for(int i=0;i<n-1;i++){
            temp = sum - a[i];
            // cout<<temp<<" ";
            for(int j = i+1;j<n;j++){
                temp = temp - a[j];
                // cout<<temp<<" ";
                if( (temp >= x) && (temp <= y) ){
                    // cout<<i+1<<" "<<j+1<<endl;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
