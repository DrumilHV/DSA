// https://docs.google.com/document/d/1l7kysN9GKCY-Ti8OLrJGRopA2mPUeEoKAJQj57AzIWY/edit?tab=t.0

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int m, n,  q;
        cin>>m>>n;
        vector<vector<int>> arr(m,vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        map<int, int> row, col;
        map<pair<int, int>, int> freq;
        cin>>q;
        while(q--){
            int x, y;
            cin>>x>>y;
            row[x]++;
            col[y]++;
            freq[{x, y}]++;
        }
        int changed = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int k = freq[{i, j}];
                int p = row[i]-k;
                int q = col[j]-k;
                if(p%2!=0){
                    changed+=m;
                }
                if(q%2!=0){
                    changed+=n;
                }
                if(k%2!=0){
                    changed++;
                }
            }
        }
        cout<<(m*n-changed);
    }
    return 0;
}