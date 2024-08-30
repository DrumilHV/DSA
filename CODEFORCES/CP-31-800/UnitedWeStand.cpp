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
    for(int i =0;i<n;i++){
        bool flag = true;
        for(int j = 0;j<n;j++){
            if(j==i) continue;
            if(arr[i]%arr[j]==0){
                flag = false;
                break;
            }
        }
            if(!flag){
                b.push_back(arr[i]);
            }else{
                c.push_back(arr[i]);
            }
    }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(int i =0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
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