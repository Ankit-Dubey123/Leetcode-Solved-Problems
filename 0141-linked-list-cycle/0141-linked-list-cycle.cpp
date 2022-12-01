/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // unordered_set<ListNode*>st;
        // while(head!=NULL){
        //     if(st.find(head)!=st.end()){
        //         return true;
        //     }
        //     st.insert(head);
        //     head=head->next;
        // }
        // return false;
        //--------------------------2nd method tortoise method
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
        
    }
};