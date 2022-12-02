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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL or head->next==NULL)return head;
        ListNode* ans = new ListNode();
        ListNode* temp=ans ;
        ListNode* odd =head;
        ListNode* even = head->next;
        while(odd!=NULL and odd->next!=NULL){
            temp->next= new ListNode(odd->val);
            temp=temp->next;
            odd=odd->next->next;
        }
        if(odd!=NULL){
            temp->next=new ListNode(odd->val);
            temp=temp->next;
        }
        while(even!=NULL and even->next!=NULL){
            temp->next=new ListNode(even->val);
            temp=temp->next;
            even=even->next->next;
        }
        if(even!=NULL){
            temp->next=new ListNode(even->val);
            temp=temp->next;
        }
        return ans->next;
    }
};