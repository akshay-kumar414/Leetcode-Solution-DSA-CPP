class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (root == NULL) {
            return true;
        }

        bool seen_null = false;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* t = q.front();
            q.pop();

            if (t == NULL) {
                seen_null = true;
                continue;
            }

            if (seen_null) {
                return false;
            }

            q.push(t->left);
            q.push(t->right);
        }

        return true;
    }
};