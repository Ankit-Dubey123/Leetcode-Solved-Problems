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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL or headB==NULL)return NULL;
        ListNode* a=headA;
        ListNode* b=headB;
        // if a and b have different length then we will stop the loop after second iteration
        while(a!=b){
            //for the end of first iteration , we just reset the pointer to the head of another linkedlist
            a=(a==NULL)?headB:a->next;
            b=(b==NULL)?headA:b->next;
        }
        return a;
    }
};