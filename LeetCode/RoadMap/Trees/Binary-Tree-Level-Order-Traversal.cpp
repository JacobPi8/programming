class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        if (!root) return {};
        vector<vector<int>> result;
        
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            int level = q.size();
            vector<int> temp;

            for (int i = 0; i < level; i++) {

                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(temp);
        }

        return result;

    }
};