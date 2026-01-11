class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* x = head;
        int list_length = 0;
        
        while(x){

            list_length++;
            x = x->next;
        }

        int position = list_length - n;
        if(position == 0) return head->next;
        x = head;

        for(int i = 0; i < position - 1; i++) x = x->next;
        x->next = x->next->next;

        return head;

    }
};