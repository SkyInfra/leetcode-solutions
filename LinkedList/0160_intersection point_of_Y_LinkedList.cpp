class Solution {
    int length(ListNode* h){
        int l = 0;
        while(h != NULL){
            l++;
            h = h->next ;
        }
        return l;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int la = length(headA);
        int lb = length(headB);
        while(la > lb){
            la--;
            headA= headA->next ;
        }
        while(lb > la){
            lb--;
            headB= headB->next ;
        }
        while(headA != headB){
            headA = headA->next ;
            headB = headB->next;
        }
        return headA;
    }
}