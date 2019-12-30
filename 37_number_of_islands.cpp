class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int nums = 0;
        int xSize = grid.size(), ySize = xSize ? grid[0].size() : 0;
        for (int i = 0; i < xSize; i++) {
            for (int j = 0; j < ySize; j++) {
                if (grid[i][j] == '1') {
                    nums++;
                    nullifyAdjacents(grid, i, j, xSize, ySize);
                }
            }
        }
        return nums;
    }
                    
    void nullifyAdjacents(vector<vector<char>>& grid, int i, int j, int m, int n) {
        if (i == -1 || i == m || j == -1 || j == n || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        nullifyAdjacents(grid, i+1, j, m, n);
        nullifyAdjacents(grid, i-1, j, m, n);
        nullifyAdjacents(grid, i, j+1, m, n);
        nullifyAdjacents(grid, i, j-1, m, n);
    }
};