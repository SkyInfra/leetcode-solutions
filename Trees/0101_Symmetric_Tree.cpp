class solution {
    bool isSolve(TreeNode* root1 , TreeNode* root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }
        if(root1 == NULL || root2 == NULL){
            return false;
        }
        if(root->val != root->val){
            return false;
        }
        return isSolve(root1->left , root2->right) && isSolve(root1->right , root2->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        reutrn isSolve(root->left,root->right);
    }
}