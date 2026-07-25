class Solution {
public:
    TreeNode* nextRight = nullptr;
    void flatten(TreeNode* root) {
        flatten(root->right);
        flatten(root->left);    

        root->left = nullptr;
        root->right = nextRight;
        nextRight = root;
    }
}