#include<bits/stdc++.h>
using namespace std;
    void rotate(vector<vector<int> >& matrix) {
    // vector<vector<int>> mat;
        int n = matrix.size();
        vector<vector<int> > cpy(n,vector<int>(n,0));
        // cpy.reserve(n*n);
        // vector<vector<int> >
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cpy[j][n-i-1] = matrix[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<cpy[i][j]<<" ";
                matrix[i][j] = cpy[i][j];
            }
            cout<<endl;
        }
    }
    int main(){
        vector<vector<int> > matrix;
        int value = 3;
        // matrix.reserve(value*value);
        int count = 0;
        for(int i=0;i<value;i++){
            for(int j=0;j<value;j++){
                matrix[i][j] = count++;
            }
        }
    rotate(matrix);



    }