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
        int n;
        cin>>n;
        v<int> nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.pb(x);
        }
        while(nums.back()==0 && !nums.empty()){
            nums.pop_back();
        }
        reverse(nums.begin(), nums.end());
        while(nums.back()==0 && !nums.empty()){
            nums.pop_back();
        }
        reverse(nums.begin(), nums.end());
        if(nums.empty()){
            cout<<"0\n";
            continue;
        }
        bool hz= false;
        for(auto x: nums){
            hz |= (x==0);
        }
        if(hz){
            cout<<"2\n";
        }else{
            cout<<"1\n";
        }
    }
    return 0;
}
