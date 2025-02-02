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
    int n, m;
    cin >> n >> m;

    long long mx = INT_MIN, x;
    // cout << "here1" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x;
        mx = max(mx, x);
    }
    int l, r;
    char symbol;
    // cout << "here2" << endl;
    while (m--) {
        cin >> symbol >> l >> r;
        // cout << symbol << " " << l << " " << r << endl;
        if (l <= mx && mx <= r) {
            if (symbol == '+') {
                mx = mx + 1;
                cout << mx << " ";
            } else if (symbol == '-') {
                mx = mx - 1;
                cout << mx << " ";
            }
        } else {
            cout << mx << " ";
        }
    }
    cout << "\n";
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