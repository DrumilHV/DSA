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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        set<int> st;
        int a[n];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            st.insert(x);
            // cout<<x<<" ";
        }
        string s("");
        if(n-k>=2){
            for(int i =0;i<m;i++){
                s+="0";
            }
            cout<<s<<endl;
            continue;
        }

        if(n-k==0){
            for(int i =0;i<m;i++){
                bool flag = true;
                for(int j =0;j<m;j++){
                    if(j==a[i]){
                        continue;
                    }
                    if(st.find(a[j])==st.end()){
                        flag = false;
                        break;
                    }
                }
                s+=flag?"1":"0";
            }
            cout<<s<<endl;
            continue;
        }
        
        for(int i=0;i<m;i++){
            if(st.find(a[i])!=st.end()){
                s+="0";
            }else{
                s+="1";
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
