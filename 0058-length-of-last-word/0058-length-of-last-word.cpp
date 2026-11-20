class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int cnt = 0;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count last word
        while (i >= 0 && s[i] != ' ') {
            cnt++;
            i--;
        }

        return cnt;
    }
};