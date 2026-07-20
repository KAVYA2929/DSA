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
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        unordered_map<int , ListNode*> mpp;
        ListNode* dummynode = new ListNode(0,NULL);
        dummynode -> next = head;
        mpp[0] = dummynode;
        int prefixsum = 0;
        while(head){
            prefixsum = prefixsum + head -> val;
            if(mpp.find(prefixsum) != mpp.end()){
                ListNode* start = mpp[prefixsum];
                ListNode* temp = start;
                int psum = prefixsum;
                while(temp != head){
                    temp = temp -> next;
                    psum += temp -> val;
                    if (temp != head) {
                        mpp.erase(psum);
                    }
                    
                    
                }
                start -> next = head -> next;

            }else{
                mpp[prefixsum] = head;
            }
            head = head -> next;
        }
        return dummynode -> next;
        
        
    }
};