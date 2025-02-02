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
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int cnt = 0;
    int top = 0, right = 0;
    int num = 1;
    while (num++ <= 100) {

        for (int i = 0; i < n; i++) {
            if (s[i] == 'N') {
                top++;
            } else if (s[i] == 'S') {
                top--;
            } else if (s[i] == 'W') {
                right--;
            } else if (s[i] == 'E') {
                right++;
            }
            if (x == right && top == y) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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