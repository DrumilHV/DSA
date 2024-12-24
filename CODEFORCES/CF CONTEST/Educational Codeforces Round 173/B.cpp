#include <bits/stdc++.h>
using namespace std;

vector<int> findDivisors(long long n, int d) {
    vector<int> ans;

    ans.push_back(1);

    if(d == 2 || d == 4 || d == 6 || d == 8) {
        ans.push_back(2);
    }

    if(n >= 3) {
        ans.push_back(3);
    } else {
        if(d == 3 || d == 6 || d == 9) {
            ans.push_back(3);
        }
    }

    if(d == 4 || d == 8) {
        ans.push_back(4);
    }

    if(d == 5) {
        ans.push_back(5);
    }

    if(n >= 3) {
        if(d == 2 || d == 4 || d == 6 || d == 8) {
            ans.push_back(6);
        }
    } else {
        if(d == 6) {
            ans.push_back(6);
        }
    }

    if(n >= 3) {
        ans.push_back(7);
    } else {
        if(d == 7) {
            ans.push_back(7);
        }
    }

    if(d == 8) {
        ans.push_back(8);
    }

    if(n >= 6) {
        ans.push_back(9);
    } else {
        if(n == 2) {
            if(d == 9) ans.push_back(9);
        } else if(n == 3) {
            if(d == 3 || d == 6 || d == 9) ans.push_back(9);
        } else if(n == 4) {
            if(d == 3 || d == 6 || d == 9) ans.push_back(9);
        } else if(n == 5) {
            if(d == 3 || d == 6 || d == 9) ans.push_back(9);
        }
    }

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    int t;
    cin >> t;
    while(t--){
        long long n;
        int d;
        cin >> n >> d;
        vector<int> divisors = findDivisors(n, d);

        for(int i=0; i<(int)divisors.size(); i++){
            cout << divisors[i];
            if(i+1 < (int)divisors.size()) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
