#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int arr[], int n, int k){
    if(n==1){
        cout<<"YES";
        return ;
    }
    if(k==1){
        bool isSorted = true;
        for(int i =1;i<n;i++){
            if(arr[i]<arr[i-1]){
                isSorted = false;
                cout<<"NO"<<endl;
                return;
            }
        }
        if(isSorted){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(k>1){
        cout<<"YES";
        return;
    }
    cout<<"NO";
    return ;
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
        solve(arr, n, k);
    }
    return 0;

}