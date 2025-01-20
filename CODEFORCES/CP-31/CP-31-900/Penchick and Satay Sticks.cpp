#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define v vector
void solve() {
    int n;
    cin >> n;
    v<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    v<int> b(arr.begin(), arr.end());
    sort(b.begin(), b.end());
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}