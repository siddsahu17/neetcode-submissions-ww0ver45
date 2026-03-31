class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<vector<int>> dp(n + 1, vector<int>(p + 1, INT_MAX));
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 0;
        }

        for (int i = n - 2; i >= 0; i--) {
            for (int pairs = 1; pairs <= p; pairs++) {
                int take = INT_MAX;
                if (i + 1 < n) {
                    take = max(nums[i + 1] - nums[i], dp[i + 2][pairs - 1]);
                }
                int skip = dp[i + 1][pairs];
                dp[i][pairs] = min(take, skip);
            }
        }

        return dp[0][p];
    }
};