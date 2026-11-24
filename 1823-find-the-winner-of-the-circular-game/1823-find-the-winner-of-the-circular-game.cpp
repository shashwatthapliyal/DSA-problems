class Solution {
public:
    int findTheWinner(int n, int k) {

        vector<int> vec;
        for (int i = 1; i <= n; i++) {
            vec.push_back(i);
        }

        int startIdx = 0;
        while (vec.size() > 1) {
            int idxToRemove = (startIdx + k - 1) % vec.size();
            vec.erase(vec.begin()+idxToRemove);
            
            startIdx=idxToRemove%vec.size();
        }
        return vec[0];
    }
};