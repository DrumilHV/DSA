// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define pii pair<int, int>
// #define v vector

// // int check(int  curr,vector<vector<int>> &arr, char c ){

// //     for(int i =0;i<arr[c-'A'].size();i++){
// //         if(arr[c-'A'][i] >= curr){
// //             return arr[c-'A'][i];
// //         }
// //     }
// //     return 0;
// // }
// // void solve(){
// //     string s,t;
// //     cin>>s>>t;
// //     v<v<int>> sv(26);
// //     map<char, int> sm, tm;
// //     for(int i =0;  i<s.size() ;i++){
// //         sv[s[i]-'A'].pb(i);
// //         sm[s[i]]++;
// //     }
// //     for(auto x: t){
// //         tm[x]++;
// //     }
// //     for(auto x: tm){
// //         if(sm[x.ff] < tm[x.ff]  ){
// //             cout<<"NO\n";
// //             return;
// //         }
// //     }
// //     for(int i=0;i<26;i++){
// //         if(tm.find('A'+i)==tm.end()){
// //             if(sm.find('A'+i)!=sm.end()){
// //                 int i = sm['A'+i]-tm['A'+i];
// //                 while(i--){
// //                 sv['A'+i].erase(sv['A'+i].begin());
// //                 }
// //             }
// //         }
// //     }
// //     int curr = sv[t[0]-'A'].size() > 0 ? sv[t[0]-'A'][0] : INT_MAX;
// //     for(int i =1;i<t.size();i++){
// //         if()
// //     }

// // }
// // int main(){
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);
// //     freopen("input.txt", "r", stdin);
// //     freopen("output.txt", "w", stdout);
// //     int t;
// //     cin>>t;
// //     while(t--){

// //     }
// //     return 0;
// // }

// int main()
// {
//     string s, t;
//     cin >> s >> t;
//     map<char, int> mp1, mp2;
//     for (auto ch : s)
//     {
//         mp1[ch]++;
//     }
//     for (auto ch : t)
//     {
//         mp2[ch]++;
//     }
//     int j = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == t[j])
//         {
//             if (mp1[s[i]] < mp2[t[j]])
//             {
//                 break;
//             }
//             if (mp1[s[i]] == mp2[t[j]])
//             {
//                 mp2[t[j]]--;
//                 j++;
//             }
//         }
//         mp1[s[i]]--;
//     }
//     if (j == t.size())
//         cout << "YES\n";
//     else
//         cout << "NO\n";
// }


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl endl
 
void solve(){
	
 
	string s,t;
    cin>>s>>t;
    map<char,int> mp1,mp2;
    for(auto ch : s){
        mp1[ch]++;
    }
    for(auto ch : t){
        mp2[ch]++;
    }
    int j=0; 
    for(int i=0; i<s.size(); i++){
        if(s[i]==t[j]){
        if(mp1[s[i]]< mp2[t[j]]){
            break;
    }
     if(mp1[s[i]]==mp2[t[j]]){
        mp2[t[j]]--;
        j++;
     }
        }
     mp1[s[i]]--;
    }
    if(j==t.size()) cout<< "YES\n";
    else cout<< "NO\n";
    
 
 
}
 
 
 
signed main() {
    int qt;
    cin >> qt;
    while (qt--) {
        solve();
  
    }
}