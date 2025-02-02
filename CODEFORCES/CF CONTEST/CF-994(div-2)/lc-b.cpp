#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // We'll store all paths here
    vector<vector<int>> allPaths;
    int m, n;
    
    // Helper DFS to collect all possible paths
    void collectPaths(int i, int j, vector<int> &curr, vector<vector<int>> &grid) {
        // If out of bounds, just return
        if (i < 0 || j < 0 || i >= m || j >= n) {
            return;
        }
        
        // Include the current cell's value
        curr.push_back(grid[i][j]);
        
        // If we've reached the bottom-right corner, store the path
        if (i == m - 1 && j == n - 1) {
            allPaths.push_back(curr);
            curr.pop_back(); // backtrack
            return;
        }
        
        // Move right
        collectPaths(i, j + 1, curr, grid);
        // Move down
        collectPaths(i + 1, j, curr, grid);
        
        // Backtrack
        curr.pop_back();
    }

    int countPathsWithXorValue(vector<vector<int>> &grid, int k) {
        // Dimensions
        m = (int)grid.size();
        n = (int)grid[0].size();
        
        // Clear the container for fresh runs
        allPaths.clear();
        
        // Collect all possible paths from (0,0) to (m-1, n-1)
        vector<int> temp;
        collectPaths(0, 0, temp, grid);
        
        // Compute XOR on each path and count how many match k
        long long countPaths = 0;
        for (auto &path : allPaths) {
            int x = 0;
            for (int val : path) {
                x ^= val;
            }
            if (x == k) {
                countPaths++;
            }
        }
        
        // If the problem statement requires modulo 1e9+7:
        // long long MOD = 1000000007;
        // return (int)(countPaths % MOD);
        
        return (int)countPaths;  // For small cases, just return the count
    }
};
