/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reversenode(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* last = reversenode(head->next);
        head -> next -> next = head;
        head -> next = NULL;
        return last;

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reversenode(l1);
        l2 = reversenode(l2);

        int sum = 0;
        int carry = 0;
        ListNode* ans = new ListNode();
        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL){
                sum = sum + l1 -> val;
                l1 = l1 -> next;
            }
            if(l2!=NULL){
                sum = sum + l2 ->val;
                l2 = l2 -> next;
            }
            ans -> val= sum % 10;
            carry = sum / 10;
            ListNode* newn = new ListNode(carry);
            newn -> next = ans;
            ans = newn;
            sum = carry;
        }
        if(carry == 0){
            return ans-> next;
        }else{
            return ans;
        }

        
    }
};