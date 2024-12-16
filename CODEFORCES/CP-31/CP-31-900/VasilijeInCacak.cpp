#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int main(){
    int t;
    cin >> t;
    while(t--){
      ll n, k, x;
      cin >> n >> k >> x;
      ll temp = n * (n + 1) / 2;
      ll zz = (n - k) * (n - k + 1) / 2;
      if(temp < x || (k * (k + 1) / 2 > x) || temp - x < zz) {
        cout << "NO" << '\n';
      } else {
        cout << "YES" << '\n';
      }
    }
    return 0;
}