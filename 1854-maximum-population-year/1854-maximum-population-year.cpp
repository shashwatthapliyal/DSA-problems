class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {

        vector<pair<int, int>> evt;

        for (auto it : logs) {
            int b = it[0];
            int d = it[1];

            evt.push_back({b, +1});
            evt.push_back({d, -1});
        }
        sort(evt.begin(), evt.end());

        int sum = 0;
        int mx = 0;
        int ans = 0;

        for (auto it : evt) {
            sum += it.second;

            if (sum > mx) {
                mx = sum;
                ans = it.first;
            }
        }
        return ans;
    }
};