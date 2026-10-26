class Solution {
public:
    int countMonobit(int n) {
        int ans = 1;
        for (int x = 1; x <= n; x = x * 2 + 1)
            ans++;
        return ans;
    }
};