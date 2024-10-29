#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int solve(int n, int arr[], int sum, int mul){
    int pos = 0, neg = 0;

   for(int i =0;i<n;i++){
        if(arr[i]>0)pos++;
        else neg++;
   }
   int ans = 0;
   while(pos<neg){
    pos++;
    neg--;
    ans++;
   }
   return (neg % 2 == 0) ? ans: ans+1;
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
        int a[n];
        int sum= 0;
        int mul = 1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            mul*=a[i];
            
        }
        cout<<solve(n, a, sum, mul);
        cout<<endl;
    }
    return 0;
}