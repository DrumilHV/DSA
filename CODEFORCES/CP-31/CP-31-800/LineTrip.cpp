#include<bits/stdc++.h>
using namespace std;
#define ll long long


int solve(int arr[], int n, int k){
    int last = 0;
    int maxi = INT_MIN;
    for(int i =0;i<n;i++){
        maxi = max(maxi,abs(last-arr[i]));
        last = arr[i];
    }
    maxi = max(maxi, 2*abs(last-k));
    return maxi;
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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<endl;
        cout<<solve(arr, n, k)<<endl;
    }
    return 0;

}