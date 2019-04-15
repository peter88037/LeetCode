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
    int sumNumbers(TreeNode *root) {
        int sum = 0;
        sumRootToLeafNum(root, 0, sum);
        return sum;
    }
    
    void sumRootToLeafNum(TreeNode *root, int curNum, int &sum) {
        if(!root) return;
        curNum = curNum*10 + root->val;
        cout<<curNum<<endl;
        if(!root->left && !root->right) sum += curNum;
        if(root->left) sumRootToLeafNum(root->left, curNum, sum);
        if(root->right) sumRootToLeafNum(root->right, curNum, sum);
    }
};