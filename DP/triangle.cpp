/*

https://leetcode.com/problems/triangle/

Given a triangle array, return the minimum path sum from top to bottom.

For each step, you may move to an adjacent number of the row below. 
More formally, if you are on index i on the current row, 
you may move to either index i or index i + 1 on the next row.

Example 1:

Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
Output: 11
Explanation: The triangle looks like:
   2
  3 4
 6 5 7
4 1 8 3
The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 (underlined above).
Example 2:

Input: triangle = [[-10]]
Output: -10
 

Constraints:

1 <= triangle.length <= 200
triangle[0].length == 1
triangle[i].length == triangle[i - 1].length + 1
-104 <= triangle[i][j] <= 104
*/
class Solution {
public:
    int helper(vector<vector<int>> & triangle,vector<vector<int>> & dp ,int i,int j){
        if(i>=triangle.size() || j>=triangle[i].size()){
            return 0;
        }
        if(dp[i][j] != -1) return dp[i][j];
        int right = triangle[i][j] + helper(triangle, dp, i+1, j+1);
        int up =    triangle[i][j] + helper(triangle, dp, i+1, j);
        return dp[i][j] = min(up, right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int i =0, j=0;
        return helper(triangle, dp , i,j);
    }
};