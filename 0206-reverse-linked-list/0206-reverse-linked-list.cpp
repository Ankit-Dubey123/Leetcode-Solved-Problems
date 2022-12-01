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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev_p=NULL;
        ListNode* curr_p=head;
        ListNode* next_p;
        while(curr_p!=NULL){
            next_p=curr_p->next;
            curr_p->next=prev_p;
            prev_p=curr_p;
            curr_p=next_p;
        }
        return prev_p;
    }
};