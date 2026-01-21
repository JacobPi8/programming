class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        int result = 0;
        dfs(root, result);

        return result;
    }

    int dfs(TreeNode* node, int& result){

        if(!node) return 0;

        int left = dfs(node->left, result);
        int right = dfs(node->right, result);

        if(result < left + right) result = left + right;

        return max(left, right) + 1;
    }
};