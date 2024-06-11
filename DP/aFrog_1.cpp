// // =================================RECURSIVE SOLUTION ==========================================
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// vector<ll> dp;
// int f(vector<int> & arr, int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return dp[n] = abs(arr[2]-arr[1]);
//     }
//     if(dp[n]!= -1) return dp[n];
//     return dp[n] = min(f(arr,n-1) + abs(dp[n-1]-dp[n]),f(arr,n-2) + abs(dp[n-2]-dp[n]) );
// }

// int f_bu(vector<int> & arr, int n){
//     dp.clear();
//     dp.resize(100005, -1);
//     dp[1] = 0;
//     dp[2] = abs(arr[1]-arr[2]);
//     for(int i =3;i<=n;i++){
//         dp[i] = min(dp[i-1]+abs(arr[i-1]-arr[i]),dp[i-2]+abs(arr[i-2]-arr[i]));

//     } 
//     return dp[n];
// }

// int main(){
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL);
//     int n;
//     cin>>n;
//     vector<int> arr(n+1);
//     dp.clear();
//     dp.resize(n+1, -1);
//     for(int i=1;i<=n;i++){
//         cin>>arr[i];
//         }

//     cout<<f_bu(arr, n);
//     return 0;
// }

// // =================================ITERATIVE SOLUTION ==========================================



// // #include <bits/stdc++.h> 
// // #define ll long long
// // #define ull unsigned long long
// // #define pb push_back
// // #define mp make_pair
// // #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// // using namespace std;

// // int main()
// // {
// //     fast_io;
    
// //     ll n;
// //     cin>>n;
// //     vector<ll> h(n+1);

// //     for(ll i=0;i<n;i++)
// //     cin>>h[i];
// //     vector<ll> dp(n+1);

// //     //base case
// //     dp[0] = 0;
// //     dp[1] = h[1] - h[0];

// //     //BU
// //     for(ll i=2;i<n;i++)
// //     {
// //         ll op1 = dp[i-1] + abs(h[i]-h[i-1]);
// //         ll op2 = dp[i-2] + abs(h[i]-h[i-2]);
// //         dp[i] = min(op1,op2);
// //     }
// //     cout<< dp[n-1] <<endl;

// //     return 0;
// // }



#include <iostream>
#include <vector>


#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;

signed main() {
    FAST_IO;

    int n;
    cin >> n;
    int jumps[n];
    vector<int> dp(n, 0); // dp[i] : Minimum cost for the frog to reach position i.
    for (int i = 0; i < n; i++) cin >> jumps[i];
    dp[1] = abs(jumps[1] - jumps[0]); // Base value
    for (int i = 2; i < n; i++)
        dp[i] = min(abs(jumps[i] - jumps[i - 1]) + dp[i - 1], abs(jumps[i] - jumps[i - 2]) + dp[i - 2]);
    cout << dp[n - 1];
    return 0;
}