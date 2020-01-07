class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                ans = max(ans, getIslandSize(grid, i, j));
            }
        }
        return ans;
    }
    
    int getIslandSize(vector<vector<int>>& grid, int i, int j) {
        if (!grid[i][j]) return 0;
        grid[i][j] = 0;
        int sum = 0;
        if (i < grid.size()-1) 
            sum += getIslandSize(grid, i+1, j);
        if (j < grid[i].size()-1) 
            sum += getIslandSize(grid, i, j+1);
        if (i != 0) 
            sum += getIslandSize(grid, i-1, j);
        if (j != 0) 
            sum += getIslandSize(grid, i, j-1);
        return 1 + sum;
    }
};