
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head ;
        ListNode* far = NULL;
        while(curr != NULL){
            far = curr->next ;
            curr->next = prev;
            prev = curr;
            curr  = far ;
        }
        return prev ;
    }
};