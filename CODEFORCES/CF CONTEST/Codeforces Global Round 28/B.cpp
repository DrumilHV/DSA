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
        int i =k;
        int cnt = 1;
        vector<int> arr(n, -1);
        for(int i = k-1;i<n;i+=k){
            arr[i] = cnt++;
        }
        for(int i =0;i<n;i++){
            if(arr[i]!= -1){
                cout<<arr[i]<<" ";
            }else{
                cout<<cnt++<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
