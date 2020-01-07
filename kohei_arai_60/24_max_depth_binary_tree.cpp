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
    int maxDepth(TreeNode* root) {
        int max = 0;
        DFS(root, max, 1);
        return max;
    }
    
    void DFS(TreeNode* node, int& max, int level) {
        if (!node) return;
        if (level > max) max = level;
        
        DFS(node->left, max, level+1);
        DFS(node->right, max, level+1);
    }
};