class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.size();
        int maxLen = 1;
        int sidx = 0;

        for (int i = 0; i < n; i++) {

            // Odd length
            int j = i - 1;
            int k = i + 1;

            while (j >= 0 && k < n && s[j] == s[k]) {

                if (k - j + 1 > maxLen) {
                    sidx = j;
                    maxLen = k - j + 1;
                }

                j--;
                k++;
            }

            // Even length
            j = i;
            k = i + 1;

            while (j >= 0 && k < n && s[j] == s[k]) {

                if (k - j + 1 > maxLen) {
                    sidx = j;
                    maxLen = k - j + 1;
                }

                j--;
                k++;
            }
        }

        return s.substr(sidx, maxLen);
    }
};