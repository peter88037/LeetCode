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
        int cur=0,mini=10000;
        return ansDepth(root,cur);
    }
    int ansDepth(TreeNode* root,int cur)
    {
        if(root == NULL)
        {
            return 0;
        }
        cur++;
        if(root->left==NULL && root->right==NULL)
        {
            return cur;
        }
        
        if(root->left!=NULL && root->right==NULL)
        {
            return ansDepth(root->left,cur);
        }
        if(root->right!=NULL && root->left==NULL)
        {
            return ansDepth(root->right,cur);
        }
        
        return min(ansDepth(root->left,cur),ansDepth(root->right,cur));
    }
};