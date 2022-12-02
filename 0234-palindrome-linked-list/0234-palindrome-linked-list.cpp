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
    ListNode* reverse(ListNode* head){
        if(head==NULL or head->next==NULL){
            return head;
        }
        ListNode* n=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return n;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL)return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode* dummy=head;
        while(slow!=NULL){
            if(slow->val!=dummy->val){
                return false;
            }
            slow=slow->next;
            dummy=dummy->next;
        }
        return true;
    }
};