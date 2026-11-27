class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int i = 1; i <= n / 2; i++) {
            if (n % i != 0)
                continue;

            string cmp = "";
            int times = n / i;

            while (times != 0) {
                cmp += s.substr(0, i);
                times--;
            }
            if (cmp == s)
                return true;
        }
        return false;
    }
};