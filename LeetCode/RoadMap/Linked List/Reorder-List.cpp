class Solution {
public:
    void reorderList(ListNode* head) {

        if(!head || !head->next) return;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){

            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondPart = slow->next;
        slow->next = nullptr;
        ListNode* temp = nullptr;

        while(secondPart){

            ListNode* next = secondPart->next;
            secondPart->next = temp;
            temp = secondPart;
            secondPart = next;
        }
        secondPart = temp;

        ListNode* firstPart = head;
        while(secondPart){

            ListNode* temp1 = firstPart->next;
            ListNode* temp2 = secondPart->next;
            
            firstPart->next = secondPart;
            secondPart->next = temp1;
            
            firstPart = temp1;
            secondPart = temp2;
        }
    }
};