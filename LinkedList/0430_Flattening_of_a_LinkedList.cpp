class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head ;
        while(curr != NULL){

            if(curr->child != nullptr){
                Node* far = curr->next ;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = nullptr;
                while(curr->next != nullptr){
                    curr = curr->next ;
                }

                if(far != nullptr){
                    curr->next = far;
                    far->prev = curr;
                }
            }

            curr = curr->next ;
        }
        return head;
    }
}