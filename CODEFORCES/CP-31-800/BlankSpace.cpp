#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int solve(int n , int arr[]){
   int ans = 0, mx= 0;
   for(int i =0;i<n;i++){
        if(arr[i]==0){
            ans++;
            i++;
            while(arr[i]==0 && i<n){
                ans++;
                i++;
            }
            mx = max(mx, ans);
            ans = 0;
        }
   }
   return mx;

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
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(n, arr)<<endl;
    }
    return 0;
}


