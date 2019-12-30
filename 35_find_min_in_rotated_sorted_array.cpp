class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, last = nums.size()-1;
        while (nums[start] > nums[last]) {
            int mid = (start + last) / 2;
            if (nums[mid] < nums[last]) {
                last = mid;
            } else {
                start = mid+1;
            }
        }
        return nums[start];
    }
};