class Solution {
public:
    bool isBalanced(TreeNode* root) {

        bool result = true;
        dfs(root, result);
        return result;   
    }

    int dfs(TreeNode* node, bool& result){

        if(!node) return 0;

        int left_depth = dfs(node->left, result);
        int right_depth = dfs(node->right, result);
        if(abs(left_depth - right_depth) > 1) result = false;

        return max(left_depth, right_depth) + 1;
    }
};