/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int>> ans;
        // int n = numRows.size();
        if(numRows <= 0){
            vector<int> row;
            ans.push_back(row);
            return ans;
        }
        for(int i = 0;i<numRows;i++){
            vector<int> row(i+1,1);
            
            for(int j=1;j<i;j++){
                
                row[j] = ans[i-1][j-1]+ans[i-1][j];
                
            }
            
            ans.push_back(row);
        }
        return ans;
    }
};

int main()
{
    int n = 5;
    Solution sol;
    vector< vector< int > > ans = sol.generate(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}