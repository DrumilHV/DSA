#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int,int>
#define v vector

int solve(char b[10][10]){
    int sum = 0;
    for(int i =0;i<10;i++){
        for(int j = 0;j<10;j++){
            if(b[i][j]=='X'){
                sum += std::min({i, 9-i, j, 9-j})+1;
            }
        }
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        char b[10][10];
        // for(int i=0;i<10;i++){
        //     b[i][0] = '0';
        //     b[0][i] = '0';
        // }
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>b[i][j];
            }
        }
        cout<<solve(b)<<endl;
    }
    return 0;
}