class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& vis, vector<vector<int>>& grid, int delrow[], int delcol[]){
        vis[r][c] =1;
        int n = grid.size();
        int m = grid[0].size();
        for(int i =0;i<4;i++){
            int row = r + delrow[i];
            int col = c + delcol[i];
            if(row>=0 && row<n && col>=0 && col<m && grid[row][col]==1 && !vis[row][col]){
                dfs(row, col, vis, grid, delrow, delcol);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n =grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1};
        for(int i = 0;i<n;i++){
            if(!vis[i][0] && grid[i][0]==1){
                dfs(i, 0, vis, grid, delrow, delcol);
            }
            if(!vis[i][m-1] && grid[i][m-1]==1){
                dfs(i, m-1, vis, grid, delrow, delcol);
            }
        }

        for(int j = 1;j<m-1;j++){
            if(!vis[0][j] && grid[0][j]==1){
                dfs(0, j, vis, grid, delrow, delcol);
            }
            if(!vis[n-1][j] && grid[n-1][j]==1){
                dfs(n-1, j, vis, grid, delrow, delcol);
            }
        }
        
        int count = 0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0){
                    count++;
                }
            }
        }
        return count;
    }
};