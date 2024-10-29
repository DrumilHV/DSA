// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define pii pair<int,int>
// #define v vector

// void solve(int n, string s){
//     int i = 0, j = n-1;
//     int count = n;
//     while(s[i]!=s[j] && count>0){
//         i++;
//         j--;
//         count-=2;
//     }
//     cout<<count<<endl;
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         solve(n, s);
//     }
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int l = 0, r = n - 1, ans = n;
	while (s[l] != s[r] && ans > 0) {l++; r--; ans -= 2;}
	cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}