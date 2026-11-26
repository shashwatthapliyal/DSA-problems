class Solution {
public:
    int reverse(int x) {
        string num = to_string(x);

        int d = 0;
        bool flag = false;
        if (num[0] == '-') {
            d = 1;
        }
        std::reverse(num.begin() + d, num.end());

        try {
            return stoi(num);
        } catch (...) {
            return 0;
        }
    }
};