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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        pre_order(ans, root, 0);
        return ans;
    }
    
    void pre_order(vector<vector<int>>& ans, TreeNode* root, int level) {
        if (!root) return;
        
        if (ans.size() == level) 
            ans.push_back(vector<int>());
        
        ans[level].push_back(root->val);
        
        if (root->left) pre_order(ans, root->left, level+1);
        if (root->right) pre_order(ans, root->right, level+1);
    }
};