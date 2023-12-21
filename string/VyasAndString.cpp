#include<bits/stdc++.h>
using namespace std;
int checkMax(string s, int k ){
    int i = 0,j=0;
    int maxC = 0;
    int cpy = k;
    int n = s.size();
        char c  = s[0];
    for(int k= 0;k<n,j<n;k++){
        if(s[j]==c){
            j++;
            maxC = max(maxC,j-i+1);
            printf("\n in for loop: %c %c %d \n",c,s[j],maxC);
        }else if(cpy && j<n){
            cpy--;
            maxC = max(maxC,j-i+1);
            printf("\n in for loop: %c %c %d \n",c,s[j],maxC);
            j++;
        }else{
            cpy = k;
            i = j;
            c=s[j];
        }
    }
    return maxC;

}
int main(){
    string s= "abba";
    int k = 2;
    printf(" \n %d  ",checkMax(s,k));
}
