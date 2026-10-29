
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for (int q : queries) {
            int sum = 0, count = 0;
            for (int x : nums) {
                if (sum + x > q) break;
                sum += x;
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
