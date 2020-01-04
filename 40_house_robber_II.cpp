class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return n ? nums[0] : 0;
        return max(robber(nums, 0, n-2), robber(nums, 1, n-1));
    }
    
    int robber(vector<int>& nums, int start, int last) {
        int x = 0, y = 0;
        for (int i = start; i <= last; i++) {
            if (i & 1) {
                x = max(x + nums[i], y);
            } else {
                y = max(y + nums[i], x);
            }
        }
        return max(x, y);
    }
};