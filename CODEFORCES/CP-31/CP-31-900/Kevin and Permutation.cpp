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
    int n, k;
    cin >> n >> k;
    int num = 1;
    v<int> a(n, -1);

    for (int i = k - 1; i < n; i += k) {
        a[i] = num++;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            cout << num++ << " ";
        } else {
            cout << a[i] << " ";
        }
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