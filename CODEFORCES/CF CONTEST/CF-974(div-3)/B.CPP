#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector
#define MOD 1000000007
/*
( a + b) % c = ( ( a % c ) + ( b % c ) ) % c
( a * b) % c = ( ( a % c ) * ( b % c ) ) % c
( a – b) % c = ( ( a % c ) – ( b % c ) ) % c
*/

ll power(int x, int y, int p) {
    // Initialize result
    ll res = 1;

    // Update x if it is more than or equal to p
    x = x % p;

    // In case x is divisible by p
    if (x == 0)
        return 0;

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

string solve(int n, int k ){
    if(n==0) return 0;
    ll L = n - k + 1;
    ll R = n;
    ll num_odds = (R + 1) / 2 - L / 2;
    return num_odds%2==0 ? "YES":"NO";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;        
    }
}