#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int solve( vector<int> & arr, int n){
    int sum = accumulate(arr.begin(), arr.end(), 0);
    
    return -sum;
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
        vector<int> arr(n,0);
        for(int i =0;i<n-1;i++){
            cin>>arr[i];
        }
        cout<<solve(arr, n-1)<<endl;
    }
}