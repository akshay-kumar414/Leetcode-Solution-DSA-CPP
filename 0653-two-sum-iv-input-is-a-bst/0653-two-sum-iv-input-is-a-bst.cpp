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
    vector<int>ans;
    void fun(TreeNode* root){
        if(root == NULL){
            return;
        }
        fun(root->left);
        ans.push_back(root->val);
        fun(root->right);
        return;
    }
    bool findTarget(TreeNode* root, int k) {
        ans.clear();

        fun(root);
        int i=0;
        int j = ans.size()-1;
        while(i < j){
            int sum = ans[i] + ans[j];
            if(sum == k){
                return true;
            }
            else if(sum > k){
                j--;
            }
            else{
                i++;
            }

        }
        return false;
        
    }
};