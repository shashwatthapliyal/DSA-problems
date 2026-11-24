class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> vec;
        int n = nums.size();

        for (int i = 0; i <= n - 3; i++) {
            int j = i + 1;
            int k = n - 1;

if(i>0 && nums[i]==nums[i-1]) continue;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0) {
                    vec.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[j]==nums[j-1]) k--;


                } else if (sum > 0)
                    k--;
                else
                    j++;

            }
        }
        return vec;
    }
};