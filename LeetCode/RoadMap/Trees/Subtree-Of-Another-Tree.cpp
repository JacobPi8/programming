class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if (!root) return false;
        if (isSameTree(root, subRoot)) return true;
        if (isSubtree(root->left, subRoot)) return true;
        if (isSubtree(root->right, subRoot)) return true;

        return false;
        
    }

    bool isSameTree(TreeNode* p, TreeNode* q){

        if (!p && !q) return true;
        if (!p || !q) return false;
        if (p->val != q->val) return false;

        if (!isSameTree(p->left, q->left)) return false;
        if (!isSameTree(p->right, q->right)) return false;

        return true;
    }
};