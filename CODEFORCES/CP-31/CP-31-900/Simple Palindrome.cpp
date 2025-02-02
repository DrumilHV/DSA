#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define v vector
const char arr[5] = {'a', 'e', 'i', 'o', 'u'};
void solve() {
    int n;
    cin >> n;
    int idx = 0;
    int num = 0;
    string s;
    while (n--) {
        // cout << idx << " ";
        s.push_back(arr[idx % 5]);
        if (idx != 0 && idx % 5 == 0) {
            num += 1;
            idx += num;
        }
        idx++;
    }
    cout << s << endl;
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
