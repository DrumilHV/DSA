#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int solve(int n, int k, int arr[] ){
    if(n==0) return 0;
    int count = 0;
    int totC = 0;
    for(int i =0;i<n;i++){
        if(arr[i] >= k){
            totC+= arr[i];
            continue;            
        }
        if(totC>0 && arr[i]==0){
            count++;
            totC--;
        }

    }
    return count;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(n,k, arr)<<endl;        
    }
}