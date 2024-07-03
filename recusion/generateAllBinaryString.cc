#include<bits/stdc++.h>
using namespace std;

void helper(int n, string s, vector<string> & ans){
    if(s.size() > n){
        return;
    }
    if(s.size()==n){
        ans.push_back(s);
        return;
    }
    helper(n,s+"0",ans);
    helper(n, s+"1", ans);
    return ;
}
int main(){
    int n;
    cin>>n;
    vector<string> ans;
    helper(n,"",ans);
    for(auto i: ans){
        cout<<i<<endl;
    }
    return 0;
}