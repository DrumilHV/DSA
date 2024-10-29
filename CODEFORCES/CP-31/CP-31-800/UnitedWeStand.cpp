#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

void solve(int arr[], int n){
    vector<int> b, c;
    sort(arr, arr+n);
    int max = arr[n-1];
    int i = n-1;
    while(arr[i]==max && i >= 0 ){
        c.push_back(max);
        i--;
    }
    for(int j = 0;j<=i;j++){
        b.push_back(arr[j]);
    }
    if(b.size()==0|| c.size()==0) {
        cout<<-1;
        return;
    }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(int i =0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<c.size();i++){
        cout<<c[i]<<" ";
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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr, n);
        cout<<endl;
    }
}