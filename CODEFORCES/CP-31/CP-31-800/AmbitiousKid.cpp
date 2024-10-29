#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int solve(int n, int arr[]){
    int ans =0;
    int minE = INT_MAX;
    for(int i=0;i<n;i++){
        minE = min(minE, abs(arr[i]));
        if(arr[i]==0){
            return 0;
        }
    }
    return minE;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<solve(n, arr)<<endl;
}