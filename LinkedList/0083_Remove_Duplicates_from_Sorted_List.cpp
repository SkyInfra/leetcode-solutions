class Solution{
public:
    ListNode *deleteDuplicates(ListNode *head){
        ListNode *curr = head;
        while (curr != NULL && curr->next != NULL){
            if (curr->val == curr->next->val){
                ListNode *del = curr->next;
                curr->next = del->next;
                delete del;
            }else{
                curr = curr->next;
            }
            return head;
        }
    }
}