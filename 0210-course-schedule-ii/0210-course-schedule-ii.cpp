class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
                vector<vector<int>> graph(numCourses);
        for (int h = 0; h < prerequisites.size(); h++) {
            graph[prerequisites[h][1]].push_back(prerequisites[h][0]);
        }
        vector<int> indegree(numCourses, 0);
        for (int i = 0; i < numCourses; i++) {
            for (auto it : graph[i]) {
                indegree[it]++;
            }
        }
        queue<int> q;
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        vector<int> topo;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for (auto it : graph[node]) {
                indegree[it]--;
                if (indegree[it] == 0) {
                    q.push(it);
                }
            }
        }
        if (topo.size() == numCourses) {
            return topo;
        }
        return {};
    }
};