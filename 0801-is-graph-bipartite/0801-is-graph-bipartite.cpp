class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, 0);
        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (color[i]) continue;
            color[i] = 1;
            q.push(i);
            while (!q.empty()) {
                int cur = q.front();
                q.pop();
                for (auto adj : graph[cur]) {
                    if (!color[adj]) {
                        q.push(adj);
                        color[adj] = -color[cur];
                    } else if (color[adj] == color[cur]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};