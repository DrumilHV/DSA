/*
https://leetcode.com/problems/unique-paths-ii/description/

You are given an m x n integer array grid. There is a robot initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot takes cannot include any square that is an obstacle.

Return the number of possible unique paths that the robot can take to reach the bottom-right corner.

The testcases are generated so that the answer will be less than or equal to 2 * 1e9.
*/

class Solution {
public:
    int helper(vector<vector<int>>& og, long long count,int currR,int currC ,vector<vector<long long>> & dp){
        if(currR >= og.size()|| currC>= og[0].size()||currR<0||currC<0){
            return 0;
        }
        if(og[currR][currC]==1){
            return 0;
        }
        if(currR == og.size()-1 && currC == og[0].size()-1){
            return 1;
        }
        if(dp[currR][currC] != -1) return dp[currR][currC];
        return dp[currR][currC] = 
        helper(og,count, currR+1, currC, dp) + helper(og,count, currR, currC + 1, dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<long long>> 
        dp(obstacleGrid.size(), vector<long long>(obstacleGrid[0].size(), -1));
        long long count = 0;
        int currR = 0, currC = 0;
        return helper(obstacleGrid, count,currR, currC, dp);
        
    }
};

/*
Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right


Input: obstacleGrid = [[0,1],[0,0]]
Output: 1

*/