class Solution {
public:
    bool canGet(int candyCnt, vector<int>& candies, long long k) {

        int n = candies.size();

        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += candies[i] / candyCnt;

            if (cnt >= k)
                return true;
        }
        return false;
    }

    int maximumCandies(vector<int>& candies, long long k) {

        
        int low = 1;
        int high = *max_element(candies.begin(), candies.end());

        int ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (canGet(mid, candies, k)) {
                ans = mid;
                low = mid + 1;
            } else
                high = mid - 1;
        }
        return ans;
    }
};