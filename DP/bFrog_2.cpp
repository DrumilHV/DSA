// #include<bits/stdc++.h>
// #define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
// using namespace std;



// int main() {
//     FAST_IO;

//     int n,k;
//     cin >>n>>k;
//     int jumps[n];
//     vector<int> dp(n); // dp[i] : Minimum cost for the frog to reach position i.
//     for (int i = 0; i < n; i++) cin >> jumps[i];
//     dp[0] = 0;
//     for (int i = 1; i < n; i++){
//         dp[i] = INT_MAX;
//       for(int j = 1;j<=k;j++){
//         if(i-j < 0 ) break;
//         dp[i] = min(abs(jumps[i] - jumps[i - j]) + dp[i-j], dp[i]);
//       }
//     }
       
//     cout << dp[n -1];
//     return 0;
// }

// =================================RECURSIVE SOLUTION ==========================================

#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;

int f(int jumps[], int n, int k){
    vector<int> dp(n); // dp[i] : Minimum cost for the frog to reach position i.
    if(n==0)
    return dp[0] = 0;
    if(k>n || k < 0) return 0;
    return dp[n-1] = min(abs(f(jumps, n-1, k)-f(jumps, n-1, k-1))+dp[n-k], dp[n-1]);

    // for (int i = 1; i < n; i++){
    //     dp[i] = INT_MAX;
    //   for(int j = 1;j<=k;j++){
    //     if(i-j < 0 ) break;
    //     dp[i] = min(abs(jumps[i] - jumps[i - j]) + dp[i-j], dp[i]);
    //   }
    // }
}

int main() {
    FAST_IO;

    int n,k;
    cin >>n>>k;
    int jumps[n];
    for (int i = 0; i < n; i++) cin >> jumps[i];
    
       
    cout << f(jumps, n,k);
    return 0;
}



