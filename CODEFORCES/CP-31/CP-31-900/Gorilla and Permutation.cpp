#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define v vector
long long sum(int n, int s) { return (n * (n + 1)) / 2 - s * (s - 1) / 2; }
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    // long long diff = ;
    for (int i = n; i >= n - min(m, k); i--) {
        cout << i << " ";
    }
    for (int i = 1; i < n - min(m, k); i++) {
        cout << i << " ";
    }
    cout << endl;
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}