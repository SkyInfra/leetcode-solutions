class Solution {
public:
    int countNodes(TreeNode* root) {
        int count = 0 ;
        if(root == NULL){
            return count ;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
}