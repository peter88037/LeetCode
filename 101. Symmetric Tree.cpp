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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        return checkSym(root->left,root->right);
    }
    bool checkSym(TreeNode*L,TreeNode*R)
    {
        if(L==NULL && R!=NULL)
        {
            return false;
        }
        else if(L!=NULL && R==NULL)
        {
            return false;
        }
        else if(L==NULL && R==NULL)
        {
            return true;
        }
        else
        {
            if(L->val != R->val)
            {
                return false;
            }
            else
            {
                return checkSym(L->left,R->right) && checkSym(R->left,L->right);
            }
        }
    }
};