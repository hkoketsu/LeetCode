class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end());
        
        vector<int> ans;
        for (int num : nums2) {
            if (set.erase(num) > 0) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};