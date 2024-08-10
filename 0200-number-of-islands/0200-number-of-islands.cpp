class Solution {
private:
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        vis[i][j]=1;
        int n = grid.size();
        int m = grid[0].size();
        for (int delrow = -1; delrow <= 1; delrow++) {
            for (int delcol = -1; delcol <= 1; delcol++) {
                if (abs(delrow) == abs(delcol)) {
                    continue;
                }
                int nrow = i + delrow;
                int ncol = j + delcol;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
                    vis[nrow][ncol]=1;
                    dfs(nrow, ncol, grid, vis);
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        vector<vector<int>>vis(n, vector<int>(m,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    cnt++;
                    dfs(i, j, grid, vis);
                }
            }
        }
        return cnt;
    }
};