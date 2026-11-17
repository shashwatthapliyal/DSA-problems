class Solution {
public:
    string digitSum(string s, int k) {
        int size = s.size();

        string str = s;
        int cnt = 0;
        int digit = 0;
        while (str.size() > k) {
            string temp="";
            for (int i = 0; i < str.size(); i++) {
                if (cnt < k) {
                    digit += str[i]-'0';
                    cnt++;
                }
                if (cnt >= k || i==str.size()-1 ) {
                    temp+=to_string(digit);
                    digit=0;
                    cnt = 0;
                }
            }
            str=temp;
        }
        return str;
    }
};