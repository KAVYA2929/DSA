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
    int findlength(ListNode*head){
        ListNode* temp = head;
        int cnt = 0;
        while(temp){
            temp = temp -> next;
            cnt++;
        }
        return cnt;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int l = findlength(head);

        int k_1 = k;
        ListNode* Node1 = head;
        while(k_1>1){
            Node1 = Node1 -> next;
            k_1--;

        }
        int k_2 = l - k + 1;
        ListNode* Node2 = head;
        while(k_2>1){
            Node2 = Node2 -> next;
            k_2--;

        }
        swap(Node1 -> val , Node2 -> val);
        return head;
        
    }
};