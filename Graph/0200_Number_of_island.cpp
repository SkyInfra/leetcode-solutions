class Solution {
    void dfs(int i, int j, vector<vector<bool>> &visit,
             vector<vector<char>> &grid, int n, int m) {

        // Base case
        if (i < 0 || i >= n || j < 0 || j >= m ||
            visit[i][j] || grid[i][j] != '1') {
            return;
        }

        // Mark current cell as visited
        visit[i][j] = true;

        // Explore all 4 directions
        dfs(i - 1, j, visit, grid, n, m); // Up
        dfs(i + 1, j, visit, grid, n, m); // Down
        dfs(i, j - 1, visit, grid, n, m); // Left
        dfs(i, j + 1, visit, grid, n, m); // Right
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int island = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    dfs(i, j, vis, grid, n, m);
                    island++;
                }
            }
        }

        return island;
    }
};