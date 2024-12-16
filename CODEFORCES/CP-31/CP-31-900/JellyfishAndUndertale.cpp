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
      int a, b, n;
      cin>>a>>b>>n;
      int arr[n];
      for(int i=0;i<n;i++ ){
        cin>>arr[i];
      }
      ll time = b;
      for(int i=0;i<n;i++){
        time += min(arr[i],a-1);
      }
      cout<<time<<"\n";
    }
    return 0;
}






