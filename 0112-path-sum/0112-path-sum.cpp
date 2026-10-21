/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool ans = false;
    void fun(TreeNode* root,int sum, int targetSum){
        if(root == NULL){
            return;
        }
        sum = sum + root->val;
        if(root->left == NULL && root->right == NULL){//leaf hai toh
            if(sum == targetSum){
                ans = true;
                return;
            }
            // niche jao tree ka..



        }
            fun(root->left,sum,targetSum);
            fun(root->right,sum,targetSum);
            return;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        fun(root,0,targetSum);
        return ans;
        
    }
};