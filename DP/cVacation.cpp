#include<algorithm>
#include <iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;

int f(int n, vector<vector<int> > arr){
    vector<vector<int > > dp(n, vector<int> (3, 0));

    dp[n-1][0] = arr[n-1][0];
    dp[n-1][1] = arr[n-1][1];
    dp[n-1][2] = arr[n-1][2];

    for(int i = n-2;i>=0;i--){
        dp[i][0] = arr[i][0] +max(dp[i+1][1], dp[i+1][2]);
        dp[i][1] = arr[i][1] +max(dp[i+1][0], dp[i+1][2]);
        dp[i][2] = arr[i][2] +max(dp[i+1][1], dp[i+1][0]);
    }
    return max(dp[0][0], max(dp[0][1], dp[0][2]));
}
int main() {
    int n;
    cin >> n;
    vector<vector<int> > arr(n, vector<int>(3, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    cout << f(n, arr) << endl;
    return 0;
}