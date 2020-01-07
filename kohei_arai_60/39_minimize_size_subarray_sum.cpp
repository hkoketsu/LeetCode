class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int ans = nums.size() + 1, sum = 0, size = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            size++;
            if (sum >= s) {
                while (sum - nums[i - size + 1] >= s) {
                    sum -= nums[i - size + 1];
                    size--;
                }
                ans = min(ans, size);
            }
        }
        return ans == nums.size() + 1 ? 0 : ans;
    }
};