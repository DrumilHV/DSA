# include<bits/stdc++.h>
using namespace std;
void removeOccurance(string str, string output, int i, string &ans){
    if(i>= str.size()) return ;
    if(str[i]=='x'){
        return removeOccurance(str, output, i+1, ans);
    }
    ans += str[i];
    return removeOccurance(str, output+str[i],i+1, ans);

}

int main(){
    string str("abcdxefgxhixkx");
    string op("");
    string ans("");
    removeOccurance(str, op, 0, ans);
    cout<<ans;
    return 0;
}
