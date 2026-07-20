class Solution{
    int search(vector<int>& inorder, int left , int right, int v){
        for(int  i = left ; i <=right ; i++){
            if(inorder[i] == v){
                return i;
            }
        }
        return -1;
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int left , int right , int preindex){
        if(left > right ){
            return NULL
        };
        TreeNode* root = new TreeNode(preorder[preindex]);
        preindex++;

        int index = search(inorder, left, right,root->val);

        root->left = helper(preorder,inorder, int left , index -1 ,preindex);
        root->right = helper(preorder,inorder, int indx+1 , right ,preindex);

        return root;

    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preindex = 0;
    return   helper(preorder,  inorder, 0 ,inorder.size()-1, preindex)
    }
}