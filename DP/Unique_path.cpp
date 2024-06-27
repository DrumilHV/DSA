/*
https://leetcode.com/problems/unique-paths/description/

There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). 
The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). 
The robot can only move either down or right at any point in time.

Given the two integers m and n, return the number of possible 
unique paths that the robot can take to reach the bottom-right corner.

The test cases are generated so that the answer will be less than or equal to 2 * 1e9.
*/
class Solution {
public:
    int helper(int m , int n, int currM, int currN, vector<vector<long long>> & count){
        if(currM >= m || currN >= n){
            return 0 ;
        }
        if(currM == m-1 && currN == n-1){
            return 1;
        }
        if(count[currM][currN]!= -1) return count[currM][currN];
        return count[currM][currN] =
        helper(m,n,currM+1,currN,count)+helper(m,n,currM,currN+1,count);
    }
    int uniquePaths(int m, int n) {
        vector<vector<long long>> count(m, vector<long long>(n,-1));
        return helper(m, n, 0, 0, count);
        
    }
};
/*
Input: m = 3, n = 7
Output: 28
Example 2:

Input: m = 3, n = 2
Output: 3
Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Down -> Down
2. Down -> Down -> Right
3. Down -> Right -> Down
*/