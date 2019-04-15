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
    bool isBalanced(TreeNode* root) {
        int redLight=0,deep=0;
        if(root==NULL)
        {
            return true;
        }
        deepTree(root,redLight,deep);
        return redLight==1 ? false:true;
        
    }
    int deepTree(TreeNode* root,int &redLight,int deep)
    {
        int leftD=0,rightD=0;
        if(root->left==NULL && root->right==NULL)
        {
            deep++;
            return deep;
        }
        if(root->left!=NULL)
        {
            leftD=deepTree(root->left,redLight,deep);
        }
        else
        {
            leftD=0;
        }
        if(root->right!=NULL)
        {
            rightD=deepTree(root->right,redLight,deep);
        }
        else
        {
            rightD=0;
        }
        if(abs(leftD-rightD)>1)
        {
            redLight=1;
        }
        return max(leftD,rightD)+1;
    }
};