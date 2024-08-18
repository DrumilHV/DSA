#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

string solve(int n, int k, int arr[]){
    for(int i =0;i<n;i++){
        if(arr[i] == k){
            return "Yes";
        }
    }
    return "No";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<solve(n,k,a)<<endl;
    
    }
}