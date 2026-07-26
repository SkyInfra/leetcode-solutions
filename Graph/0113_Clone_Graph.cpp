class Soluton {
    unordered_map<Node* ,Node*> mp;
    Node* dfs(Node* node){
        if(node == nullptr){
            return node;
        }
        if(mp.find(node) != mp.end()){
           return  mp[node];
        }
        Node* newNode= new Node(node->val);

        mp[node] = newNode;

        for(auto nb : node->neighbors){
            newNode->neighbors.push_back(dfs(nb));
        }
        return newNode;
    }
    public:
    Node* cloneGraph(Node* node) {
        return dfs(node);
    }

}