#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define v vector

pair<int, string> check(string s) {
    int o = 0, e = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i & 1)
            o += s[i] - '0';
        else
            e += s[i] - '0';
    }
    if (abs(o - e) % 11 == 0) {
        return {0, "0"};
    } else if (o > e) {
        return {o - e, "1"};
    }
    return {e - o, "2"};
}
// string helper(int n , string s, int idx){
//     if(check(s)){
//         return s;
//     }
//     string temp = s;
//     temp[idx] = '6';
//     helper(n, temp, idx-1);
//     temp[idx] = '3';
//     helper(n, temp, idx-1);
//     return "";

// }
void solve() {
    int n;
    cin >> n;
    if (n == 1 || n == 3) {
        cout << -1 << "\n";
        return;
    }
    if (n % 2 == 0) {
        for (int i = 0; i < n - 2; i++) {
            cout << "3";
        }
        cout << "66\n";
        return;
    }
    for (int i = 0; i < n - 5; i++) {
        cout << "3";
    }
    cout << "36366\n";
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
