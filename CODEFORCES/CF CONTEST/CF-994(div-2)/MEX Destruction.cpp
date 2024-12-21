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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool zb = false;
        bool az = true;
        for(int i =0;i<n;i++){
            cin>>a[i];
            if(a[i]==0 && i<n-1 && i>0){
                zb = true;
            }
            if(a[i]!=0){
                az = false;
            }
        }
        // cout<<zb<<" ";
        if(az){
            cout<<0<<endl;
        }
        else if((a[0]!=0 && a[n-1]!=0 )&& !zb){
            cout<<1<<endl;
            // cout<<1<<"no zero"<<endl;
        }
        else if( (a[0]==0) && !zb){
            cout<<1<<endl;
            // cout<<1<<"first 0 and no in b/w"<<endl;
        }
        else if( a[n-1]==0 && !zb){
            cout<<1<<endl;
            // cout<<1<<"last 0 and no in b/w"<<endl;
        }
        else if(a[0]==0 && a[n-1]==0 && !zb){
            cout<<1<<endl;
            // cout<<1<<"both first and last 0 but b/w num"<<endl;
        }else{
            cout<<2<<endl;
        }
    }
    return 0;
}