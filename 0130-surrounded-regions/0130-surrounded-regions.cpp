class Solution {
private:
    void dfs(int r, int c, vector<vector<int>>& vis,
             vector<vector<char>>& board, int delrow[], int delcol[]) {
        int n = board.size();
        int m = board[0].size();
        vis[r][c] = 1;
        for (int i = 0; i < 4; i++) {
            int row = r + delrow[i];
            int col = c + delcol[i];
            if (row >= 0 && row < n && col >= 0 && col < m && !vis[row][col] &&
                board[row][col] == 'O') {
                dfs(row, col, vis, board, delrow, delcol);
            }
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1};
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            if (!vis[i][0] && board[i][0] == 'O') {
                dfs(i, 0, vis, board, delrow, delcol);
            }
            if (!vis[i][m - 1] && board[i][m - 1] == 'O') {
                dfs(i, m - 1, vis, board, delrow, delcol);
            }
        }

        for (int j = 1; j < m-1; j++) {
            if (!vis[0][j] && board[0][j] == 'O') {
                dfs(0, j, vis, board, delrow, delcol);
            }
            if (!vis[n - 1][j] && board[n - 1][j] == 'O') {
                dfs(n - 1, j, vis, board, delrow, delcol);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O' && vis[i][j]==0) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};