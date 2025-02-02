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
    map<int, int> mp;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        mp[x]++;
    }
    int score = 0;
    while (!mp.empty()) {
        auto i = *mp.begin();
        if (mp.find(k - i.first) != mp.end()) {
            score++;
            mp[k - i.first]--;
            mp[i.first]--;
            if (mp[k - i.first] == 0) {
                mp.erase(k - i.first);
            }
            if (mp[i.first] == 0) {
                mp.erase(i.first);
            }
        }
    }
    cout << score << endl;
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