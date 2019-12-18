class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = (left+right) / 2;
            if (target <= nums[mid])
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};