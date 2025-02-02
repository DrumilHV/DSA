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
    int a[n];
    if (n == 2) {
        cin >> a[0] >> a[1];
        cout << a[1] - a[0] << endl;
        return;
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i < n - 2) {
            sum += a[i];
            // cout << i << " " << a[i] << " " << sum << endl;
        }
    }
    cout << a[n - 1] - (a[n - 2] - sum) << endl;
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