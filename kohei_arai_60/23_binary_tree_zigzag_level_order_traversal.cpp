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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        zigzag(ans, root, 0);
        return ans;
    }
    
    void zigzag(vector<vector<int>>& ans, TreeNode* node, int level) {
        if (!node) return;
        
        int size = pow(2, level);
        if (ans.size() == level) 
            ans.push_back(vector<int>(0, size));
        
        if (level % 2 == 0) {
            ans[level].push_back(node->val);
        } else {
            ans[level].insert(ans[level].begin(), node->val);
        }
        
        zigzag(ans, node->left, level+1);
        zigzag(ans, node->right, level+1);
    }
};