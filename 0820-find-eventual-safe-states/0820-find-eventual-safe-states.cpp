class Solution {
private:
    bool dfs(int node, vector<int>& vis, vector<int>& visPath,
             vector<vector<int>>& graph, vector<int>& check) {
        vis[node] = 1;
        visPath[node] = 1;
        check[node] = 0;
        for (auto it : graph[node]) {
            if (!vis[it]) {
                if (dfs(it, vis, visPath, graph, check) == true) {
                    check[node] = 0;
                    return true;
                }
            } else if (visPath[it]) {
                check[node] = 0;
                return true;
            }
        }
        check[node] = 1;
        visPath[node] = 0;
        return false;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, 0);
        vector<int> visPath(n, 0);
        vector<int> check(n, 0);
        vector<int> safeNodes;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, vis, visPath, graph, check);
            }
        }
        for (int i = 0; i < n; i++) {
            if (check[i] == 1) {
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};