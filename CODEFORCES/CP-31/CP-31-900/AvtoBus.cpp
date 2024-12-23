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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<4 || n&1){
            cout<<"-1\n";
        }else{
            cout<<(n+5)/6<<" "<<n/4<<endl;
        }
    }
    return 0;
}
