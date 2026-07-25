class Solution {
public:
    Node* connect(Node* root) {
        if(root == nullptr){
            return root;
        }
        queue<Node*> q;
        q.push(root);
        q.push(nullptr);
        Node* prev = nullptr;

        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            if(curr == nullptr){
                if(q.empty()){
                    break;
                }
                prev = curr ;
            }else{
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                if(prev != NULL){
                    prev->next = curr;
                }
                prev = curr;
            }
        }
        return root;
    }
}