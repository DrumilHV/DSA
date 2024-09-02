#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

string solve(int a, int b, int c){
   
   if(c%2){
      if(b>a) return "Second";
      else return "First";
   }else{
      if(a>b) return "First";
      else return "Second";
   }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       int a, b,c;
       cin>>a>>b>>c;
       cout<<solve(a,b,c)<<endl;
    }
}