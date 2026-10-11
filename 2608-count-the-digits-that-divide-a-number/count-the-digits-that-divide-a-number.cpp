class Solution {
public:
    int countDigits(int num) {
        int n = num, ans = 0;
        while (n) {
            int d = n % 10;
            if (num % d == 0) ans++;
            n /= 10;
        }
        return ans;
    }
};