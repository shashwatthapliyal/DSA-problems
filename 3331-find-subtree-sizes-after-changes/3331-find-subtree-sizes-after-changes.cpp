class Solution {
public:
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = parent.size();

        vector<vector<int>> adj(n);

        for (int i = 1; i < n; i++) {
            adj[parent[i]].push_back(i);
        }

        vector<int> last(26, -1);
        vector<int> newParent = parent;

        function<void(int)> dfs = [&](int node) {
            int ch = s[node] - 'a';

            int prev = last[ch];

            if (last[ch] != -1) {
                newParent[node] = last[ch];
            }

            last[ch] = node;

            for (int child : adj[node]) {
                dfs(child);
            }

            last[ch] = prev;
        };

        dfs(0);

        vector<vector<int>> newAdj(n);

        for (int i = 1; i < n; i++) {
            newAdj[newParent[i]].push_back(i);
        }

        vector<int> ans(n);

        function<int(int)> calculate = [&](int node) {
            int size = 1;

            for (int child : newAdj[node]) {
                size += calculate(child);
            }

            ans[node] = size;
            return size;
        };

        calculate(0);

        return ans;
    }
};