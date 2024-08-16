#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int solve(int n , string s){
    int i =0;
    int count = 0;
    while(i<n){
        while(s[i]=='#') i++;
        if(s[i+2]=='.'&& s[i]=='.'&&s[i+1]=='.'){
            return 2;
        }else if(s[i]=='.'){
            count++;
        }
        i++;
    }
    return count;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solve(n,s)<<endl;
    }

}