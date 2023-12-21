#include<bits/stdc++.h>
using namespace std;
void printPattern(int &n,int r, int c ){
    if(r>n) return;
    if(c>r){
        cout<<"\n";
        printPattern(n, r+1, 1);
        return;
    }
    cout<<"*";
    printPattern(n, r, c+1);
}
int main(){
    int n = 10;
    printPattern(n,1,1);
    return 0;
}