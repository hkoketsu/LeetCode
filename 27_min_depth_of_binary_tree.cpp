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
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        
        queue<TreeNode*> nodeQ;
        nodeQ.push(root);
        
        int level = 0;
        
        while (!nodeQ.empty()) {
            level++;
            int size = nodeQ.size();
            for (int i = 0; i < size; i++) {
                TreeNode* node = nodeQ.front();
            
                if (node->left) nodeQ.push(node->left);
                if (node->right) nodeQ.push(node->right); 

                
                nodeQ.pop();

                if (!node->left && !node->right) return level;

            }
        }
        return -1;
    }
};