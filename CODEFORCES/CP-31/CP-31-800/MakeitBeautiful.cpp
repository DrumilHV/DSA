#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

void solve(int n, int arr[]){

    if(arr[0]==arr[n-1]){
        cout<<"NO"<<"\n";
        return;
    }
    cout<<"YES"<<"\n";
    cout<<arr[n-1]<<" ";
    for(int i =0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

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
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];

        }
        solve(n, arr);
    }
    return 0;
}