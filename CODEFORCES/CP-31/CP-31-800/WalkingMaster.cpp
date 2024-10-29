// hint get distance absolute in x dir and y dir 

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

void solve(int a , int b , int c, int d){
    if(d>=b && c-d<= a-b){
        //when ever it moves +1 in x dir there is also a movevemnt in y dir so accormordate the 
        // y movement we do a - c + d - b
        cout<< ( d - b ) + ( a - c + d - b )<<"\n";
    }else{
        cout<<-1<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        solve(a, b, c, d);

    }
    return 0;
}