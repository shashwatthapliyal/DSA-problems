class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string num = to_string(n);
        int idx = num.size();

        for (int i = num.size() - 1; i > 0; i--) {
            if (num[i] < num[i - 1]) {
                num[i - 1]--;
                idx = i;
            }
        }

        for (int i = idx; i < num.size(); i++) {
            num[i] = '9';
        }

        return stoi(num);
    }
};