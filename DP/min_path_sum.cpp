/*
https://leetcode.com/problems/minimum-path-sum/description/

Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.
*/


class Solution {
public:
    int helper(int i,int j,vector<vector<int>> & grid,vector<vector<int>> &dp){
        if(i<0 || j<0){
            return 1e9;
        }
        if(i==0 && j==0){
            return grid[0][0];
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int up = grid[i][j] + helper(i-1, j, grid, dp);
        int left = grid[i][j] + helper(i, j-1, grid, dp);
        return dp[i][j] = min(up, left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int> (n, -1));
        int i = m-1,j = n-1;
        return helper(i, j, grid, dp);
    }
};


/*
Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
Output: 7
Explanation: Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.
Example 2:

Input: grid = [[1,2,3],[4,5,6]]
Output: 12
 
*/