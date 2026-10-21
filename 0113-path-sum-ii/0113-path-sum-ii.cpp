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
    vector<vector<int>>ans;
    void fun(TreeNode* root, int targetSum,vector<int>&dairy,int sum){
        //vector<int>dairy;
        if(root == NULL){
            return;
        }
        sum = sum + root->val;
        dairy.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                ans.push_back(dairy);
            }
            dairy.pop_back();
            return;
        }
        fun(root->left,targetSum,dairy,sum);
        fun(root->right,targetSum,dairy,sum);
        dairy.pop_back();
        return;




    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        ans.clear();
        vector<int>dairy;
        fun(root,targetSum,dairy,0);
        return ans;
        
    }
};