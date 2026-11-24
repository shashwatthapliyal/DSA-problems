class Solution {
public:
    int find(vector<int>& vec, int k, int idx) {
        if (vec.size() == 1)
            return vec[0];

        idx = (idx + k - 1) % vec.size();
        vec.erase(vec.begin()+idx);
        return find(vec, k, idx);
    }
    int findTheWinner(int n, int k) {
        vector<int> vec;
        for (int i = 1; i <= n; i++) {
            vec.push_back(i);
        }
        return find(vec, k, 0);
    }
};