class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            bool flag = true;

            for (int i = 0; i < m; i++) {
                if (abs(arr1[j] - arr2[i]) <= d) {
                    flag = false;
                    break;
                }
            }

            if (flag)
                cnt++;
        }

        return cnt;
    }
};