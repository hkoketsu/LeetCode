/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        return DFS(root, sum, 0);
    }
    
    bool DFS(TreeNode* node, int ans, int preSum) {
        if (!node) return false;
        
        int curSum = preSum + node->val;
        
        if (!node->left && !node->right) return ans == curSum;
        
        return DFS(node->left, ans, curSum) || DFS(node->right, ans, curSum);
    }
};