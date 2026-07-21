class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {

        if (edges.size() != n - 1)
            return false;

        vector<vector<int>> adj(n);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> parent(n, -1);
        queue<int> q;

        q.push(0);
        parent[0] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int nei : adj[node]) {
                if (parent[nei] == -1) {
                    parent[nei] = node;
                    q.push(nei);
                }
                else if (parent[node] != nei) {
                    return false;
                }
            }
        }

        for (int x : parent)
            if (x == -1)
                return false;

        return true;
    }
};