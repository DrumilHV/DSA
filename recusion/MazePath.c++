#include<bits/stdc++.h>

using namespace std;

void mazePath(int i, int j, int m ,int n, string output, vector<string> &path){
    if(i==m-1 and j==n-1){
        path.push_back(output);
    }
    if(i>=m || j>= n){
        return;
    }

    mazePath(i+1,j, m, n, output+"D", path);
    mazePath(i,j+1, m, n, output+"R", path);
}
int main(){
    vector<string> path;
    mazePath(0,0,2,2,"", path);
    for(int i = 0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<"\n"<<path.size()<<" Number of ways!";
    return 0;
}