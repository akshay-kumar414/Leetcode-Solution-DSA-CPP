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
    TreeNode* ans = NULL;


    int helper(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root == NULL){
            return 0;
        }

        int left = helper(root->left,p,q);
        int right = helper(root->right,p,q);
        int self = 0;
        if(root == p || root == q){
            self = 1;
        }
        int total = left + self + right;
        if(total == 2 && ans == NULL){
            ans = root; // karke node ka address ho kar do 
        }
        return total;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        ans = NULL;
        helper(root,p,q);
        return ans;

        

        
    }
};