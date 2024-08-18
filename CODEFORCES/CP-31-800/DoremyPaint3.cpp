#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

string solve(int n, int a[]){
    unordered_map<int, int> arr;
    for(int i = 0; i < n; i++){
        arr[a[i]]++;
    }
    int size = arr.size();

    if(size>=3){
        return "NO";
    }
    if(size==2){
        int f1 = begin(arr)->second;
        if(f1 != n/2 && f1 != (n+1)/2){
            return "NO";
        }
    }
    return "YES";

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
        cout<<solve(n, arr)<<endl;
    }
}