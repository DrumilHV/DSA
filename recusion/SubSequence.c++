#include<bits/stdc++.h>

using namespace std;
// vector<string> ans;

void subSequence(string &s, int i, string output, vector<string> &ans){
    if(i==s.size()){
        // cout<<"Pushing back \n";
        ans.push_back(output);
        return;
    }
    
    // cout<<"not pushing back lol \n";
    subSequence(s, i+1, output+s[i], ans);
    subSequence(s, i+1, output+"",ans);    
}
int main(){
    vector<string> ans;
    string s("abc");
    string output("");
    subSequence(s, 0, output, ans);
    // cout<<s<<" Test \n";

    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<"\n";

    }
    cout<<ans.size()<<" Number of substrings !\n";

    return 0;
}