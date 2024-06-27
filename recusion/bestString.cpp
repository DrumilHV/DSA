#include<bits/stdc++.h>
using namespace std;

void helper(string str, int idx, int sum){
    if(idx>=str.size()){
        sum++;
        return;
    }
    helper(str, idx+1, sum);
    helper(str, idx+1, sum);
}
int main(){
    int sum1 =0;
    int sum2 =0;
    string str1 = "abc";
    string str2 = "aab";
    helper(str1, 0, sum1);
    helper(str1, 0, sum2);
    cout<<sum1<<" "<<sum2<<endl;
    
}