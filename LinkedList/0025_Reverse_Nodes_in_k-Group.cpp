class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head ;
        for(int i = 0 ; i < k ; i++){
            if(temp == NULL){
                return head ;
            }
            temp = temp->next ;
        }
        ListNode* prev = NULL;
        ListNode* curr = head ;
        ListNode* far = NULL;
        int count = 0;
        while(curr != NULL && count < k){
            far = curr->next ;
            curr->next = prev;
            prev = curr ;
            curr = far;
            count++;
        }
        if(far != nullptr){
            head->next = reverseKGroup(far, k);
        }
        return prev;
    }
}