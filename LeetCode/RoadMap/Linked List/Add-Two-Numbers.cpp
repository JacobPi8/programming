class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int excess = 0, sum = 0, resultDigit = 0;
        ListNode* temp = new ListNode();
        ListNode* tempPosition = temp;
        
        while(l1 || l2 || excess){

            sum = excess;

            if(l1){

                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){

                sum += l2->val;
                l2 = l2->next;
            }
            
            resultDigit = sum % 10;
            excess = sum / 10;

            tempPosition->next = new ListNode(resultDigit);
            tempPosition = tempPosition->next;
        }

        ListNode* result = temp->next;
        delete temp;
        return result;
    }
};