#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int solve(int arr[],int n ){
    if(n<=1) return 0;
    int mind = arr[1]-arr[0];
    int idx = -1;
    for(int i = 1;i<n;i++){
        if(arr[i] < arr[i-1]) return 0;
        if(arr[i]-arr[i-1] < mind){
            mind = arr[i]- arr[i-1];
            idx = i;
        }
    }
   

    return mind/2 + 1 ;
 
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