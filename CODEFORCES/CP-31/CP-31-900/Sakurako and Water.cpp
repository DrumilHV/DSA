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
    int arr[n][n];
    int neg = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] < 0) {
                neg++;
            }
        }
    }
    if (neg == 0) {
        cout << 0 << endl;
        return;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int size = min(n - i, n - j);
            int mn = 0;
            for (int k = i; k < i + size; k++) {
                for (int l = j; l < j + size; j++) {
                    if (arr[k][k] < 0 && l == k) {
                        mn = min(mn, arr[k][k]);
                    }
                }
            }
            cout << endl;
            for (int k = i; k < i + size; k++) {
                arr[k][k] += abs(mn);
            }
            ans += abs(mn);
        }
    }
    cout << endl << ans << endl << endl;
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