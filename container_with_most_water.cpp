class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, end = height.size() - 1, maxArea = 0;
        while (start < end) {
            maxArea = max(maxArea, (end - start) * min(height[start], height[end]));
            if (height[start] < height[end]) start++;
            else end--;
        }
        return maxArea;
    }
};