class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<double>> ans;
        if(root == nullptr){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            long sum = 0;
            for(int i = 0 ; i < size ; i++){
                TreeNode* temp = q.front();
                q.pop();

                sum += temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back((double) sum/ size);
        }
        return ans;
    }
}