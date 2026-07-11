class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head  ;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next ;
            fast = fast->next->next ;
        }
        ListNode* prev = NULL;
        while(slow != nullptr){
            ListNode* far = slow->next ;
            slow->next = prev;
            prev = slow;
            slow = far;
        }
        while(prev != nullptr){
            if(head->val != prev->val){
                return false;
            }
        }
        return true ;
    }
}