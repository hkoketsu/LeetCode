class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permuteRecursive(result, nums, 0);
        return result;
    }
    
    void permuteRecursive(vector<vector<int>>& result, vector<int>& nums, int start) {
        int len = nums.size();
        if (start == len - 1) {
            result.push_back(nums);
            return;
        }
        
        
        for (int i = start; i < len; i++) {
            swap(nums[start], nums[i]);
            permuteRecursive(result, nums, start+1);
            swap(nums[start], nums[i]);
        }
    }
};