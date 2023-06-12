#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int sum =0;
        int carry = 0;
        int i  = num.size()-1;
        // int digit;
        vector<int> ans;
        int add;
        while(i>=0){
            add = k % 10;
            // cout<<add<<"+"<<num[i]<<"+"<<carry<<" ";
            sum = num[i] + add + carry;
            // cout<<sum<<" ";
            k = k/10;
            // cout<<k<<" ";
            carry = sum/10;
            // cout<<carry<<" ";
            sum = sum %10;
            // cout<<digit<<" ";
            // num[i] = sum ;
            ans.push_back(sum);
            // cout<<num[i]<<" ";
            i--;
        }
        while(carry !=0 || k!=0){
            sum = carry + k;
            cout<<"sum "<<sum<<" ";
            k = k/10;
            cout<<"k: "<<k<<" ";
            carry = sum/10;
            cout<<"carry "<<carry<<" ";

            sum = sum%10;
            cout<<"digit "<<sum<<" ";
            ans.push_back(sum);
            cout<<endl;
        }
        // while(k !=0){
        //     sum = k%10;\
        //     carry = sum/10;
        //     k = k/10;
        //     ans.push_back(sum);
        // }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> arr;
    arr.push_back(0);

    int num = 10000;
    vector <int>ans;
    ans = sol.addToArrayForm(arr, num);
    cout<<endl;
    for(int i =0;i<ans.size();i++){
        cout<<arr[i]<<" ";
    }



}