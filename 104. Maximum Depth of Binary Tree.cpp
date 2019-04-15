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
        int count=0;
        count=countDepth(root,count);
        return count;
    }
    int countDepth(TreeNode *root,int c)
    {
        if(root==NULL)
        {
            return c;
        }
        c++;
        return max(countDepth(root->left,c),countDepth(root->right,c));
    }
};