#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

void solve(int a[], int n){
   a[n] = 1;
   vector<int> ans;
   ans.push_back(a[0]);
   for(int i =1;i<n;i++){
        if(a[i]>=a[i-1]){
            ans.push_back(a[i]);
        }else{
            ans.push_back(a[i]);
            ans.push_back(a[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        solve(a, n);
        cout<<endl;
    }
    return 0;
}