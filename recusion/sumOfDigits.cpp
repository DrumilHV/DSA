#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(string s, int &sum, int i){
    if(i>=s.size()){
        return sum;
    }
    sum+=(s[i]-'0');
    // cout<<" "<<sum<<" ";
    return sumOfDigits(s,sum, i+1);
}

int main(){
    string s("1234567");
    int sum = 0;
    cout<<" sum:  "<<sumOfDigits(s, sum, 0)<<" ";


}