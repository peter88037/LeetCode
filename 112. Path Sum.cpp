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
       
        return isEqualtoSum(root,0,sum);
    }
    bool isEqualtoSum(TreeNode* root,int cur,int sum)
    {
        if(root==NULL)
        {
            return false;
        }
        cur=cur+root->val;
        if(root->left==NULL && root->right==NULL && cur==sum)
        {
            return true;
        }


        
        return isEqualtoSum(root->left,cur,sum) || isEqualtoSum(root->right,cur,sum);
    }
};