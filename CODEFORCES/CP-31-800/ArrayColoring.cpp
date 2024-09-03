#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

string solve(int arr[], int n){
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]%2]++;
    }
    if((mp[0]%2== 0 && mp[1]%2==0) || (mp[0]%2== 1 && mp[1]%2==0)){
        return "YES";
    }
    return "NO";
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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(arr, n)<<endl;
    }
}