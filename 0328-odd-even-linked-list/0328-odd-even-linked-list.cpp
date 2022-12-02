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
        if(head==NULL or head->next==NULL or head->next->next==NULL)return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* even_start=even;
        while(even and odd and even->next and odd->next){
            odd->next=even->next;
            even->next=odd->next->next;
            even=even->next;
            odd=odd->next;
        }
        odd->next=even_start;
        return head;
    }
};