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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int L=0,R=nums.size()-1;
        if(nums.size()==0)
        {
            return NULL;
        }
        return ansBST(nums,L,R);      

    }
    TreeNode* ansBST(vector<int>& nums,int L,int R)
    {
        int M=(L+R)/2;
        TreeNode *root = new TreeNode(nums[M]);
        if(M-1>=L)
        {
            root->left=ansBST(nums,L,M-1);
        }
        if(M+1<=R)
        {
            root->right=ansBST(nums,M+1,R);
        }
        return root;
    }
};