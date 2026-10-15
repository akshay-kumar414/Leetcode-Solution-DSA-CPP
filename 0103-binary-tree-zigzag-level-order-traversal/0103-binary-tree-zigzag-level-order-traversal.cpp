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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if(root == NULL ){
            return {};
            
        }
        queue<TreeNode*>q;
        bool l_to_r = true;
        q.push(root);
        vector<vector<int>>ans;

        while(!q.empty()){
            int lvl_size = q.size();
            // pehle size allocate krna hia 
            vector<int>temp(lvl_size);
            int first_idx = 0;
            int last_idx = lvl_size - 1;
            while(lvl_size--){
                TreeNode* t = q.front();
                q.pop();
                if(l_to_r){
                    temp[first_idx] = t->val;
                    first_idx++;
                }
                else{
                    temp[last_idx] = t->val;
                    last_idx--;

                }
                if(t->left != NULL){
                    q.push(t->left);

                }
                if(t->right != NULL){
                    q.push(t->right);

                }
            }
            ans.push_back(temp);
            l_to_r = 1 - l_to_r;

        }
        return ans;
        
    }
};