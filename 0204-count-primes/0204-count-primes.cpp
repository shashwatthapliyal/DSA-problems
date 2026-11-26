class Solution {
public:
    int countPrimes(int n) {

        if (n <= 2)
            return 0;

        vector<bool> prime(n, true);

        prime[0] = false;
        prime[1] = false;

        for (int i = 2; i <= sqrt(n); i++) {
            if (prime[i]) {
                for (int j = 2; i * j < n; j++) {
                    prime[i * j] = false;
                }
            }
        }

        int cnt = 0;
        for (auto it : prime) {
            if (it == true)
                cnt++;
        }
        return cnt;
    }
};