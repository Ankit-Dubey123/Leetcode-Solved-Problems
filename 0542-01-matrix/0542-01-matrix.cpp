class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        vector<vector<int>> dist(n, vector<int>(m,0));
        queue<pair<pair<int,int>, int>> q;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i, j}, 0});
                    vis[i][j]=1;
                }
            }
        }
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int st= q.front().second;
            q.pop();
            dist[r][c] = st;
            for(int i = 0; i<4;i++){
                int row = r + delrow[i];
                int col = c + delcol[i];
                if(row>=0 && row<n && col>=0 && col<m && vis[row][col]==0){
                    q.push({{row, col}, st + 1});
                    vis[row][col]=1;
                }
            }
        }
        return dist;
    }
};