class solution {
    int search(vector<int>& inorder, int left , int right, int val){
        for(int i = left ; i <= right ; i++){
            if(inorder[i] == val){
                return i;
            }
        }
        return -1;
    }
    TreeNode* helper(vector<int>& postOrder, vector<int>& inorder, int left , int right, int preindex){
        if(left > right){
            return NULL;
        }
        TreeNode* root = new TreeNode(postOrder[preindex]);
        preindex--;
        int index = search(inorder, left, right , root->val);
        root->right = helper(postOrder, inorder, index +1, right , preindex);
        root->left = helper(postOrder, inorder, left, index-1 , preindex);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& postOrder, vector<int>& inorder) {
        int preindex = 0;
    return   helper(preorder,  inorder, 0 ,inorder.size()-1, preindex)
    }
}
