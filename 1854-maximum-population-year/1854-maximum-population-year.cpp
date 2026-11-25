class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> arr(2051, 0);

        for (auto it : logs) {
            int b = it[0];
            int d = it[1];

            arr[b] += 1;
            arr[d] -= 1;
        }
        int mx = 0;
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum > mx) {
                ans = i;
                mx = sum;
            }
        }
        return ans;
    }
};