class Solution {
    ListNode* rotate(ListNode* head){
        ListNode* temp = head ;
        while(temp != NULL && temp->next->next != NULL){
            temp = temp->next ;
        }
        ListNode* del = temp->next ;
        temp->next = nullptr;
        del->next = head ;
        head = del;
        return head ;
    }
public: 
     ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head ;
        }
        int count = 1;
        ListNode* temp = head ;
        while(temp->next != nullptr){
            temp = temp ->next ;
            count++;
        }
        k = k % count;
        while(k){
            head = rotate(head);
            k--;
        }
        retutn head ;
     }
};