class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        if (!size) return 0;
        
        int ans = 0;
        vector<int> dp(size, 1);
        for (int i = 0; i < size; i++) {
            int maxDp = 0;
            for (int j = 0; j < i; j++) {
                maxDp = nums[i] > nums[j] ? max(dp[j], maxDp) : maxDp;
            }
            dp[i] = maxDp + 1;
            ans = max(ans, dp[i]);    
        }
        return ans;
    }
};