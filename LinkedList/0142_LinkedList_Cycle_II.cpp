
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head ;
        ListNode* fast = head ;
        bool iscycle = false;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next ;
            fast = fast->next ;
            if(slow == fast){
                iscycle = true;
                break;
            }
        }
        slow = head ;
        while(slow != fast){
            slow = slow->next;
            fast = fast ->next ;
        }
        return slow;
    }
}