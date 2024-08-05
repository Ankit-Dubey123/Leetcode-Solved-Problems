class Solution {
private:
    void dfs(int n, vector<vector<int>> & adj, vector<int>& vis){
        vis[n]=1;
        for(int j = 0; j < adj.size(); j++){
            if(adj[n][j]==1 and !vis[j]){
                dfs(j, adj, vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>vis(n, 0);
        int cnt=0;
        for(int i = 0; i<n; i++){
            if(!vis[i]){
                cnt++;
                dfs(i, isConnected, vis);
            }
        }
        return cnt;
    }
};