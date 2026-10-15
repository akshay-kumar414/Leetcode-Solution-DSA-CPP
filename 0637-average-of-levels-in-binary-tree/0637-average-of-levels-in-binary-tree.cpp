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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        queue<TreeNode*>q;
        vector<double>ans;
        q.push(root);
        while(!q.empty()){
            int lvl_size = q.size();
            double sum = 0;
            int n = lvl_size;
            while(lvl_size--){
                TreeNode* t = q.front();
                q.pop();

                sum = sum + t->val;

                if(t->left != NULL){
                    q.push(t->left);
                }
                if(t->right != NULL){
                    q.push(t->right);
                }


            }
            ans.push_back(sum/n);

        }
        return ans;
        
    }
};