#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	int t; cin >> t;
	for(int test_number = 0; test_number < t; test_number++){
		int n; cin >> n;
		vector <int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			if(a[i] == 1){
				a[i]++;
			}
		}
		for(int i = 1; i < n; i++){
			if(a[i] % a[i - 1] == 0){
				a[i]++;
			}
		}
		for(auto i : a){
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}